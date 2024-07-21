#include <stdio.h>
#include <stdlib.h>

int main() {
   // memory allocation with malloc()
   char* ptr1;
   int n;
   printf("Enter the size of the array:\n");
   scanf("%d", &n);
   printf("Entered number of elements: %d\n", n);

   ptr1 = (char*)malloc(n * sizeof(char));
   if (ptr1 == NULL) {
      printf("Memory not allocated.\n");
      exit(1);
   }
   else {
      printf("Memory was successfully allocated using malloc.\n");

      // set the elements of the array (and go out of bounds two places)
      for (int i = 0; i < n; i++) {
         ptr1[i] = i + 'a';
      }
      // print the elements
      for (int i = 0; i < n; i++) {
         printf("%c\n", ptr1[i]);
      }
   }

   // memory allocation with malloc()
   int* ptr2;
   int m;
   // get size of array
   printf("Enter the size of the array:\n");
   scanf("%i", &m);

   ptr2 = (int*)malloc(m * sizeof(int));
   if (ptr2 == NULL) {
      printf("Memory allocation failed\n");
      exit(1);
   } else {
      printf("Memory was allocated successfully\n");

      for (int i = 0; i < m; i++) {
         ptr2[i] = i+1;
      }

      for (int i = 0; i < m; i++) {
         printf("ptr2 value %i: %i\n", i, ptr2[i]);
      }
   }

   // deallocating memory with free()
   free(ptr1);
   free(ptr2);
}
