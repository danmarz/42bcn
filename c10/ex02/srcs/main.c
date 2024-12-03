/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:35:26 by ddumitre          #+#    #+#             */
/*   Updated: 2024/12/03 23:31:12 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tail.h"

void print_error(char *prog_name, char *file_name) {
    write(2, prog_name, ft_strlen(prog_name));
    write(2, ": ", 2);
    write(2, file_name, ft_strlen(file_name));
    write(2, ": ", 2);
    write(2, strerror(errno), ft_strlen(strerror(errno)));
    write(2, "\n", 1);
}

void print_tail(int fd, char *prog_name, char *file_name, int bytes_to_read) {
    char *buffer;
    ssize_t bytes_read, total_bytes = 0;

    // Allocate memory for the buffer
    buffer = malloc(BUFF_SIZE);
    if (!buffer) {
        print_error(prog_name, file_name);
        return;
    }

    // Read the entire file to calculate its size
    while ((bytes_read = read(fd, buffer, BUFF_SIZE)) > 0) {
        total_bytes += bytes_read;
    }

    // Error checking during read
    if (bytes_read == -1) {
        print_error(prog_name, file_name);
        free(buffer);
        return;
    }

    // Reset the file descriptor and re-read only the last 'bytes_to_read' bytes
    close(fd);
    fd = open(file_name, O_RDONLY);
    if (fd == -1) {
        print_error(prog_name, file_name);
        free(buffer);
        return;
    }

    // Skip bytes if file is larger than the requested size
    ssize_t skip_bytes = total_bytes > bytes_to_read ? total_bytes - bytes_to_read : 0;
    ssize_t remaining = bytes_to_read;
    while (skip_bytes > 0) {
        ssize_t to_read = skip_bytes > BUFF_SIZE ? BUFF_SIZE : skip_bytes;
        bytes_read = read(fd, buffer, to_read);
        if (bytes_read <= 0) break;
        skip_bytes -= bytes_read;
    }

    // Read and print the last 'bytes_to_read' bytes
    while ((bytes_read = read(fd, buffer, remaining > BUFF_SIZE ? BUFF_SIZE : remaining)) > 0) {
        write(1, buffer, bytes_read);
        remaining -= bytes_read;
    }

    free(buffer);
    close(fd);
}

int main(int argc, char **argv) {
    int i, bytes_to_read = 0, fd;
    char *prog_name = basename(argv[0]);

    // Validate arguments
    if (argc < 3 || ft_strcmp(argv[1], "-c") != 0) {
        write(2, "Usage: ./ft_tail -c <bytes> <file1> [file2 ...]\n", 47);
        return 1;
    }

    // Parse the -c argument
    bytes_to_read = ft_atoi(argv[2]);
    if (bytes_to_read <= 0) {
        write(2, "Error: -c option requires a positive number\n", 43);
        return 1;
    }

    // Process each file
    for (i = 3; i < argc; i++) {
        fd = open(argv[i], O_RDONLY);
        if (fd == -1) {
            print_error(prog_name, argv[i]);
            continue;
        }
        if (argc > 4) {
            write(1, "==> ", 4);
            write(1, argv[i], ft_strlen(argv[i]));
            write(1, " <==\n", 5);
        }
        print_tail(fd, prog_name, argv[i], bytes_to_read);
        close(fd);
    }

    return 0;
}
