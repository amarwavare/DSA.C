#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *prev;
    struct node *next;
};

void Traversal(struct node *head) {
    if (head->prev != NULL) {
        printf("Please give head pointer only \n");
    } else {
        struct node *traveller = head;
        printf("Travelling forward \n");
        while (traveller != NULL) {
            printf("%d \n", traveller->value);
            traveller = traveller->next;
        }
        //        printf("Currently traveller's value is %d \n", traveller->value);
        printf("Now travelling reverse ! \n");
        //        traveller = traveller->prev;
        while (traveller->prev != NULL) {
            printf("%d \n", traveller->value);
            traveller = traveller->prev;
        }
        printf("Complete \n");
    }
};

int main() {
    printf("Doubly linked list \n");

    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *one = (struct node *)malloc(sizeof(struct node));
    struct node *two = (struct node *)malloc(sizeof(struct node));
    struct node *three = (struct node *)malloc(sizeof(struct node));
    struct node *four = (struct node *)malloc(sizeof(struct node));

    head->prev = NULL;
    head->value = 0;
    head->next = one;

    one->prev = head;
    one->value = 10;
    one->next = two;

    two->prev = one;
    two->value = 20;
    two->next = three;

    three->prev = two;
    three->value = 30;
    three->next = four;

    four->prev = three;
    four->value = 40;
    four->next = NULL;

    Traversal(head);

    return 0;
}