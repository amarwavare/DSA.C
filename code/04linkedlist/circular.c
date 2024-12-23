#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

void Traversal(struct node *head) {
    struct node *traveller = head;
    do {
        printf("%d \n", traveller->value);
        traveller = traveller->next;
    } while (traveller != head);
};

struct node *InsertHead(struct node *head, int value) {
    struct node *newValue = (struct node *)malloc(sizeof(struct node));
    struct node *traveller;
    newValue->value = value;
    while (traveller->next != head) {
        traveller = traveller->next;
    }
    traveller->next = newValue;
    newValue->next = head;
    return newValue;
};

int main() {
    printf("Circular linked list \n");

    int value = 100;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *one = (struct node *)malloc(sizeof(struct node));
    struct node *two = (struct node *)malloc(sizeof(struct node));
    struct node *three = (struct node *)malloc(sizeof(struct node));
    struct node *four = (struct node *)malloc(sizeof(struct node));

    head->value = 0;
    head->next = one;
    one->value = 10;
    one->next = two;
    two->value = 20;
    two->next = three;
    three->value = 30;
    three->next = four;
    four->value = 40;
    four->next = head;

    Traversal(head);
    head = InsertHead(head, value);
    printf("Insert %d at head \n", value);
    Traversal(head);

    return 0;
}