/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:58:52 by leochen           #+#    #+#             */
/*   Updated: 2023/11/16 19:10:37 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
#include <stdint.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (size == 0 || nmemb == 0)
	{
		p = (void *)malloc(0);
		if (!p)
			return (NULL);
		return (p);
	}
	if (nmemb > (SIZE_MAX / size))
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_memset(p, 0, nmemb * size);
	return (p);
}

/*void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	p = (void *)malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, nmemb * size);
	return (p);
}*/

/*void run_calloc_tests() {
    void *p;

    // Test 1
    p = ft_calloc(SIZE_MAX, SIZE_MAX);
    if (p == NULL)
        printf("Test 1 (ft_calloc): Passed\n");
    else
        printf("Test 1 (ft_calloc): Failed\n");
    free(p);

    // Test 2
    p = ft_calloc(0, 5);
    if (p != NULL)
        printf("Test 2 (ft_calloc): Passed\n");
    else
        printf("Test 2 (ft_calloc): Failed\n");
    free(p);

    // Test 3
    p = ft_calloc(5, 0);
    if (p != NULL)
        printf("Test 3 (ft_calloc): Passed\n");
    else
        printf("Test 3 (ft_calloc): Failed\n");
    free(p);

    // Test 4
    p = ft_calloc(-5, 0);
    if (p != NULL)
        printf("Test 4 (ft_calloc): Passed\n");
    else
        printf("Test 4 (ft_calloc): Failed\n");
    free(p);
}

void run_original_calloc_tests() {
    void *p;

    // Test 1
    p = calloc(SIZE_MAX, SIZE_MAX);
    if (p == NULL)
    {    printf("Test 1 (calloc): Passed\n");
   		  printf("%p\n", p);
	}
	 else
        printf("Test 1 (calloc): Failed\n");
    free(p);

    // Test 2
    p = calloc(0, 5);
    if (p != NULL)
 	{
	      printf("Test 2 (calloc): Passed\n");
    	  printf("%p\n", p);
	}
	else
        printf("Test 2 (calloc): Failed\n");
    free(p);

    // Test 3
    p = calloc(5, 0);
    if (p != NULL)
    {
	    printf("Test 3 (calloc): Passed\n");
    	  printf("%p\n", p);
	}
	else
        printf("Test 3 (calloc): Failed\n");
    free(p);

    // Test 4
    p = calloc(-5, 0);
    if (p != NULL)
    {
	    printf("Test 4 (calloc): Passed\n");
    	printf("%p\n", p);
	}
	else
        printf("Test 4 (calloc): Failed\n");
    free(p);
}

int main(void) {
    // 调用你的测试函数
    printf("Running ft_calloc tests:\n");
    run_calloc_tests();

    // 调用原始的 calloc 函数测试
    printf("\nRunning original calloc tests:\n");
    run_original_calloc_tests();

    return 0;
}

void print_array(int *arr, size_t size) {
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
