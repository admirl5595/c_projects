#include "stdlib.h"
#include "stdio.h"
#include <stdbool.h>

#define SIZE_LIMIT 100

typedef struct {
   int data[SIZE_LIMIT];
   int top_element;
} Stack;

void initialize(Stack* stack)
{
   stack->top_element = -1;
}


bool isFull(Stack* stack)
{
   return stack->top_element == SIZE_LIMIT - 1;
}

bool isEmpty(Stack* stack)
{
   return stack->top_element == -1;
}

// can use void pointer to support any data type
void push(Stack* stack, int value)
{
   if(isFull(stack)) {
      printf("Stack is overflow! It cannot push any more elements %d.\n", value);
   }
   else {
      stack->top_element++;
      stack->data[stack->top_element] = value;
      printf("The stack has pushed element %d into the stack.\n", value);
   }
}

int pop(Stack* stack) 
{
   if(isEmpty(stack))
   {
      printf("Stack is underflow! It cannot pop out element from an empty stack.\n");
      return -1;
   } else {
      int value = stack->data[stack->top_element];
      stack->top_element--;
      return value;
   }
}

int peek(Stack* stack) {
   if (isEmpty(stack)) {
      printf("The stack is empty.\n");
      return -1;
   } else {
      return stack->data[stack->top_element];
   }
}

void empty_stack(Stack* stack) {
   if (isEmpty(stack)) {
      printf("The stack is already empty.\n");
   } else {
      int top_element = stack->top_element;
      for (int i = 0; i < top_element + 1; i++) {
         int value = pop(stack);
         printf("Popped %i from stack\n", value);
         if (isEmpty(stack)) {
            printf("The stack is empty\n");
            break;
         }
      }
   }
}

int main() {

   // declare the stack
   Stack stack;

   // initialize the stack (sets top element to -1)
   initialize(&stack);

   // push three values to the stack
   push(&stack, 10);
   push(&stack, 20);
   push(&stack, 30);
   push(&stack, 40);

   // peek the top element of the stack
   printf("The top element of the stack is %i\n", peek(&stack));

   // pop one value from the stack and print its value
   int value = pop(&stack);
   printf("Popped %i from stack.\n", value);

   // empty the stack
   empty_stack(&stack);

   return 0;
}

