#include "stdio.h"
#include "string.h"
#define MAX 7

int main() {

   printf("This program will populate an array dynamically with some fruits\n");
   printf("Enter the length of the array (max %i):\n", MAX);

   int length;
   scanf("%d", &length);

   if (length > MAX || length < 1) {
      printf("Array length too large. Enter a number between 1 and 7.");
      return 1;
   }

   // all fruits that exist in our universe
   char all_fruits[MAX][10] = {"Apple", "Banana", "Orange", "Kiwi", "Clementine",
                          "Fersken", "Nektarin"};

   // array of fruits that will be populated
   char fruits[length][10];

   // populate the fruits array and print its contents
   for (int i = 0; i < length; i++) {
      // printf("Fruit %i: %s\n", i, all_fruits[i]); This works fine
      // fruits[i] = all_fruits[i]; This gave the error "assignment to expression with array type"
      strcpy(fruits[i], all_fruits[i]);
      printf("%s\n", fruits[i]);
   }

   return 0;
};
