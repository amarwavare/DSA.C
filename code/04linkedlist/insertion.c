#include <stdlib.h>
#include <stdio.h>

struct node {
    int value;
    struct node *next;
};

void Traversal(struct node *ptr) {
    while (ptr != NULL) {
        printf("%d \n", ptr->value);
        ptr = ptr->next;
    }
}

struct node *InsertAtFirst(struct node *head, struct node *newHead, int value) {
    newHead->next = head;
    newHead->value = value;
    return newHead;
};

struct node *InsertAtIndex(struct node *head, int index, int value) {
    int i = 0;
    struct node *insertElement = (struct node *)malloc(sizeof(struct node));
    struct node *traveller = head;
    while (i != (index - 1)) {
        traveller = traveller->next;
        i++;
    }
    insertElement->value = value;
    insertElement->next = traveller->next;
    traveller->next = insertElement;
    return head;
};

struct node *InsertAtEnd(struct node *head, int value) {
    struct node *insertElement = (struct node *)malloc(sizeof(struct node));
    struct node *traveller = head;
    while (traveller->next != NULL) {
        traveller = traveller->next;
    }
    traveller->next = insertElement;
    insertElement->next = NULL;
    insertElement->value = value;
    return head;
};

struct node *InsertAfter(struct node *head, struct node *previousElement, int value) {
    struct node *newElement = (struct node *)malloc(sizeof(struct node));
    newElement->next = previousElement->next;
    newElement->value = value;
    previousElement->next = newElement;
    return head;
};

int main() {
    printf("Linked List Insertion in C \n");
    int newValue = 69;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *one = (struct node *)malloc(sizeof(struct node));
    struct node *two = (struct node *)malloc(sizeof(struct node));
    struct node *three = (struct node *)malloc(sizeof(struct node));
    struct node *four = (struct node *)malloc(sizeof(struct node));
    struct node *newHead;
    newHead = (struct node *)malloc(sizeof(struct node));

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

    printf("Traversal 1 \n");
    Traversal(head);
    newHead = InsertAtFirst(head, newHead, newValue);
    printf("Traversal 2: Insert at 1st \n");
    Traversal(newHead);
    newHead = InsertAtIndex(newHead, 4, 12);
    printf("Traversal 3: Insert %d at Index %d \n", 12, 4);
    Traversal(newHead);
    newHead = InsertAtEnd(newHead, 44);
    printf("Traversal 4: Insert at Last \n");
    Traversal(newHead);
    newHead = InsertAfter(newHead, three, 22);
    printf("Traversal 5: Insert after %d with value %d \n", three->value, 22);
    Traversal(newHead);

    return 0;
}