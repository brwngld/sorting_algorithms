#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/** Task 0 **/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);


void bubble_sort(int *array, size_t size);
/**
 * enum bool - Enumeration of Boolean values.
 * @false: Equals 0.
 * @true: Equals 1.
 */

typedef enum bool
{
	false = 0,
	true
} bool;


/** Task 1 **/
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2);
void insertion_sort_list(listint_t **list);

/** Task 2 **/
void selection_sort(int *array, size_t size);
void swap_ints(int *a, int *b);

/** Task 3 **/
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/** Task 4 **/
void shell_sort(int *array, size_t size);

/** Task 5 **/
void swap_node_ahead(listint_t **list, listint_t **tail, listint_t **shaker);
void swap_node_behind(listint_t **list, listint_t **tail, listint_t **shaker);
void cocktail_sort_list(listint_t **list);

#endif /* SORT_h */
