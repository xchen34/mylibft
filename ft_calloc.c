/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:58:52 by leochen           #+#    #+#             */
/*   Updated: 2023/11/13 14:06:52 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include <stdint.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb * size > SIZE_MAX)
		return (NULL);
	p = (void *)malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}

/*void print_array(int *arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Test 1: Normal case
    size_t nmemb1 = 5;
    size_t size1 = sizeof(int);
    int *arr1 = ft_calloc(nmemb1, size1);
    printf("Test 1:\n");
    print_array(arr1, nmemb1);

    // Test 2: Memory allocation fails
    size_t nmemb2 = SIZE_MAX / sizeof(int);
    size_t size2 = sizeof(int);
    int *arr2 = ft_calloc(nmemb2, size2);
    if (arr2 == NULL) {
        printf("Test 2:\nMemory allocation failed (expected).\n");
    }

    // Test 3: Memory allocation fails (expected)
    size_t nmemb3 = SIZE_MAX;
    size_t size3 = sizeof(int);
    int *arr3 = ft_calloc(nmemb3, size3);
    if (arr3 == NULL) {
        printf("Test 3:\nMemory allocation failed (expected).\n");
    }

    // Clean up
    free(arr1);
    free(arr2);
    free(arr3);

    return 0;
}*/
