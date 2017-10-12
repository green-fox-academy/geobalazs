#include <stdio.h>
#include <string.h>

int main (void) {
   char word1[] = "cseteimre";
   char word2[] = "cseteimre";

   char temp;

   int i, j;
   int word1_length  = strlen(word1);
   int word2_length = strlen(word2);

   // If both strings are of different length, then they are not anagrams

   if( word1_length != word2_length) {
      printf("%s and %s are not anagrams! \n", word1, word2);
      return 0;
   }

   // lets sort both strings first −

   for (i = 0; i < word1_length-1; i++) {
      for (j = i+1; j < word1_length; j++) {
         if (word1[i] > word1[j]) {
            temp  = word1[i];
            word1[i] = word1[j];
            word1[j] = temp;
         }
      }
   }
   for (i = 0; i < word2_length-1; i++) {
      for (j = i+1; j < word2_length; j++) {
         if (word2[i] > word2[j]) {
            temp  = word2[i];
            word2[i] = word2[j];
            word2[j] = temp;
         }
      }
   }

   // Compare both strings character by character

   for(i = 0; i<word1_length; i++) {
      if(word1[i] != word2[i]) {
         printf("Strings are not anagrams! \n", word1, word2);
         return 0;
      }
   }

   printf("Strings are anagrams! \n");
   return 0;
}
