#include <stdio.h>
#include <stdlib.h>

// create struct which defines node structure
struct node
{
    int value;
    struct node *next;
};

void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d \n", ptr->value);
        ptr = ptr->next;
    }
}
int main()
{
    printf("Namaste, get started to linked list ! \n");

    /* Initialize nodes by allocating dynamic memory from heap.
    Malloc() is a function in C that dynamically allocates a block of memory of a specified size (in bytes) in the heap section of memory during the runtime of a C program. It can be found in the <stdlib.h> header file. */

    struct node *head;
    struct node *one = (struct node *)malloc(sizeof(struct node));
    struct node *two = (struct node *)malloc(sizeof(struct node));
    struct node *three = (struct node *)malloc(sizeof(struct node));
    struct node *four = (struct node *)malloc(sizeof(struct node));
    head = (struct node *)malloc(sizeof(struct node));

    // linking nodes
    head->value = 7;
    head->next = one;

    one->value = 10;
    one->next = two;

    two->value = 15;
    two->next = three;

    three->value = 20;
    three->next = four;

    four->value = 25;
    four->next = NULL;

    traversal(head);

    return 0;
}