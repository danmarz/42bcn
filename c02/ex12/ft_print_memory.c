/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 00:27:05 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 15:16:09 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

void ft_print_memory(void *addr, size_t size) {
    unsigned char *ptr = (unsigned char *)addr;

    // Process 16 bytes per line
    for (size_t i = 0; i < size; i += 16) {
        // Print the memory address for the current line
        printf("%016lx: ", (uintptr_t)(ptr + i));

        // Print the hex values in groups of 2 bytes (4 hex characters)
        for (size_t j = 0; j < 16; j++) {
            if (i + j < size) {
                // Print each byte as two hex digits
                printf("%02x", ptr[i + j]);

                // Add a space every 2 bytes
                if (j % 2 != 0) {
                    printf(" ");
                }
            } else {
                // If we're past the size, fill with spaces
                printf("   ");
            }
        }

        // Print the ASCII representation of the bytes
        printf(" ");
        for (size_t j = 0; j < 16 && (i + j) < size; j++) {
            // Check if the byte is printable; if not, print '.'
            unsigned char c = ptr[i + j];
            printf("%c", isprint(c) ? c : '.');
        }
        printf("\n");
    }
}
