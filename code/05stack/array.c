#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct stack {
    int size;
    int top;
    int *arr;
};

bool IsEmpty(struct stack *p) {
    return (p->top == -1);
};
bool IsFull(struct stack *p) {
    return (p->top == (p->size - 1));
}

void PushStack () {

}

int main() {
    printf("Getting started with Stack !");
    //    struct stack s;
    //    s.top = -1;
    //    s.size = 80;
    //    s.arr = (int *)malloc(s.size * sizeof(int));
    struct stack *s;
    s->top = -1;
    s->size = 8;
    s->arr = (int *)malloc(s->size * sizeof(int));

    return 0;
}