#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

void Traversal(struct node *traveller) {
    while (traveller != NULL) {
        printf("%d \n", traveller->value);
        traveller = traveller->next;
    }
}

struct node *DeleteHead(struct node *head) {
    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
};

struct node *DeleteIndex(struct node *head, int index) {
    int i = 0;
    struct node *traveller = head;
    struct node *travellernext = head->next;
    //    for (int i = 0; i < (index - 1); i++) {
    while (i < (index - 2)) {
        traveller = traveller->next;
        travellernext = travellernext->next;
        i++;
    }
    traveller->next = travellernext->next;
    free(travellernext);
    return head;
};

struct node *DeleteElement(struct node *head, int value) {
    struct node *traveller = head;
    struct node *travellernext = head->next;
    while (travellernext->value != value && travellernext != NULL) {
        traveller = traveller->next;
        travellernext = travellernext->next;
    }
    if (travellernext->value == value) {
        traveller->next = travellernext->next;
        free(travellernext);
    }
    return head;
};

int main() {
    printf("Deletion in Linked List \n");
    int index = 1;
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
    four->next = NULL;

    printf("Traversal 1 \n");
    Traversal(head);
    printf("Traversal 2: Delete head node consisting value %d \n", head->value);
    head = DeleteHead(head);
    Traversal(head);
    printf("Traversal 3: Delete node at index %d \n", index);
    head = DeleteIndex(head, index);
    Traversal(head);
    printf("Traversal 4: Delete node consisting value %d \n", 30);
    head = DeleteElement(head, 30);
    Traversal(head);

    return 0;
}