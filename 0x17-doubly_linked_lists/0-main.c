#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include "lists.h"



/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always EXIT_SUCCESS.
 *
 *     */

int main(void)

{

	    dlistint_t *head;

	        dlistint_t *new;

		    dlistint_t hello = {8, NULL, NULL};

		        size_t n;



			    head = &hello;

			        new = malloc(sizeof(dlistint_t));

				    if (new == NULL)

					        {

							        dprintf(2, "Error: Can't malloc\n");

								        return (EXIT_FAILURE);

									    }

				        new->n = 9;

					    head->prev = new;

					        new->next = head;

						    new->prev = NULL;

						        head = new;

							    n = print_dlistint(head);

							        printf("-> %lu elements\n", n);

								    free(new);

								        return (EXIT_SUCCESS);

}

julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a

julien@ubuntu:~/0x17. Doubly linked lists$ ./a 

9

8

-> 2 elements

julien@ubuntu:~/0x17. Doubly linked lists$ 

Repo:



GitHub repository: alx-low_level_programming

Directory: 0x17-doubly_linked_lists

File: 0-print_dlistint.c

   

1. List length

mandatory

Write a function that returns the number of elements in a linked dlistint_t list.



Prototype: size_t dlistint_len(const dlistint_t *h);

julien@ubuntu:~/0x17. Doubly linked lists$ cat 1-main.c 

#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include "lists.h"



/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always EXIT_SUCCESS.
 *
 *     */

int main(void)

{

	    dlistint_t *head;

	        dlistint_t *new;

		    dlistint_t hello = {8, NULL, NULL};

		        size_t n;



			    head = &hello;

			        new = malloc(sizeof(dlistint_t));

				    if (new == NULL)

					        {

							        dprintf(2, "Error: Can't malloc\n");

								        return (EXIT_FAILURE);

									    }

				        new->n = 9;

					    head->prev = new;

					        new->next = head;

						    new->prev = NULL;

						        head = new;

							    n = dlistint_len(head);

							        printf("-> %lu elements\n", n);

								    free(new);

								        return (EXIT_SUCCESS);

}
