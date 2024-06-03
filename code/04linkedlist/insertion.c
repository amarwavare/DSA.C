#include <stdlib.h>
#include <stdio.h>

struct node {
    int value;
    struct node *next;
};

void traversal(struct node *ptr) {
    while (ptr != NULL) {
        printf("%d \n", ptr->value);
        ptr = ptr->next;
    }
}

struct node *insertAtFirst(struct node *head, int value) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->value = value;
    return ptr;
};

int main() {
    printf("Insertion in C \n");
    int newValue = 69;
    struct node *head;
    struct node *newHead;
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

    //    traversal(head);
    newHead = insertAtFirst(head, newValue);
    traversal(newHead);

    return 0;
}