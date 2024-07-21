#include "stdlib.h"
#include "stdio.h"
#include "stdbool.h"

#define SIZE_LIMIT 10

typedef struct {
   int data[SIZE_LIMIT];
   int front;
   int back;

} Queue;

void initialize(Queue* queue) {
   queue->front = -1;
   queue->back = 0;
   return;
}

bool is_empty(Queue* queue) {
   return (queue->front == queue->back -1);
}

bool is_full(Queue* queue) {
   return (queue->back == SIZE_LIMIT);
}

void enqueue(Queue* queue, int value) {
   if (is_full(queue)) {
      printf("Queue is full\n");
      return;
   } else {
      queue->data[queue->back] = value;
      queue->back++;
      return;
   }
}

int dequeue(Queue* queue) {
   if (is_empty(queue)) {
      printf("Queue is empty.\n");
      return -1;
   } else {
      int value = queue->data[queue->front+1];
      return value;
   }
}

void print_queue(Queue* queue) {
   if (is_empty(queue)) {
      printf("Queue is empty\n");
      return;
   } else {
      printf("Queue values:\n");
      for (int i = queue->front + 1; i < queue->back; i++) {
         printf("%d\n", queue->data[i]);
      }
      return;
   }
}

int main() {
   Queue queue;
   initialize(&queue);

   printf("Enter the age for each person that enters the queue:\n");
   while (!is_full(&queue)) {
      int age;
      printf("Enter age:");
      scanf("%i", &age);
      enqueue(&queue, age);
      printf("\n");
   }

   print_queue(&queue);

   while (!is_empty(&queue)) {
      int value = dequeue(&queue);
      printf("Dequeued %i from queue\n", value);
   }
   printf("Queue is now empty!\n");
   return 0;
}
