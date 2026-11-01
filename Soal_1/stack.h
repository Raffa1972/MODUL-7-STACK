#ifndef STACK_H
#define STACK_H

const int MAX = 20;

struct Stack {
    int info[21];
    int Top;
};

void createStack(Stack &S);
bool isEmpty(const Stack &S);
bool isFull(const Stack &S);
bool push(Stack &S, int x);
bool pop(Stack &S, int &x);
void printInfo(const Stack &S);
bool balikStack(Stack &S);

#endif
