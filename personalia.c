#include "stdio.h"
#include "stdlib.h"

#define LIMIT 15

int main() {
   char names[LIMIT][20] = { "Admir Ljubovic", "Jesper Ibsen", "Kjetil Kile",
                         "Torkild Liebe", "Elias Kittelsen", "Thomas Eidem",
                         "Åge", "Thor", "Joakim Heistad", "Henning Hagen",
                         "Marcus Aslaksen", "Sol Råbu", "Andreas Refstie",
                         "Kristoffer Knausen", "Tom" };
   char phone_numbers[LIMIT][20] = { "+47 957 93 979", "+47 557 83 679",
                           "+47 958 92 912", "+47 757 33 631",
                           "+47 555 70 303", "+47 605 31 389",
 			   "+47 957 33 155", "+47 910 11 153",
			   "+47 571 10 500", "+47 741 77 847",
                           "+47 874 13 991", "+47 661 19 966",
                           "+47 748 13 481", "+47 839 14 991",
                           "+47 774 76 976",  };

   for (int i = 0; i < LIMIT; i++) {
      printf("%s\t\t\t%s\n", names[i], phone_numbers[i]);
   }

   return 0;
}
