#include "main.h"
#include <assert.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct intnode {
  int value;
  struct intnode *next;
} intnode_t;

typedef struct {
  intnode_t* head;
} linked_list_t;

typedef struct {
  int capacity;
  int size;
  int *elems;
} array_int_t;

intnode_t *intnode_construct(int value, intnode_t *next)
{
    intnode_t *p = malloc(sizeof(intnode_t));
    assert (p != NULL);
    p->value = value;
    p->next = next;
    return p;
}


linked_list_t *remove_val(linked_list_t *head, int val) {

	assert(head != NULL);

	intnode_t *new;
	linked_list_t *final;

	for (intnode_t *curr = head; curr != NULL; curr = curr->next) {

		if (curr->value == val) {

			new->next->value = curr->value;
			new->next->next = NULL; // I know I'm missing one line so that next time through, new will iterate but can't find it with remaining time.


		}
	}

	final = new;

	return final;

}
void chg_cap(array_int_t *arr, int n) {

	assert(arr != NULL);
	assert(!(n > arr->size));

	array_int_t *newarr;

	if (n > (2 * arr->capacity)) {

		newarr->elems = malloc(sizeof(int) * n);

		for (int i = 0; i < n; i++) {

				newarr->elems[i] = arr->elems[i];

			}

		arr->capacity = n;

	}

	else {

		newarr->elems = malloc(sizeof(int) * (2 * arr->capacity));

		for (int i = 0; i < n; i++) {

				newarr->elems[i] = arr->elems[i];

			}

		arr->capacity = (2 * arr->capacity);

	}

	arr->elems = newarr->elems;

	free(newarr->elems);

}


int sumOddNot3R(int arr[], int n) {

	if (n == 0) { // base case.

		return 0;

	}

	else if(arr[n - 1] % 2 != 0) { // iterative case checking if the number in arr is even/odd.

		if (arr[n - 1] % 3 != 0) { // checking if the number in arr is divisible by 3.

			return sumOddNot3R(arr, (n - 1)) + arr[n - 1];

		}

	}

	return sumOddNot3R(arr, (n - 1));
} // This function is O(n) because checking if it's divisible by 3 and if it's an
// odd number are both O(1). As it goes through the recursive portion through the array,
// it will be O(n) as it depends on how many items are in the list. O(1) + O(1) + O(1) + O(n) = O(n)
// as O(n) takes precedence over O(1).












