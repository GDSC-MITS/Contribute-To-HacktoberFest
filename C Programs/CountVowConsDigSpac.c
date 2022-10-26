//Program to count the total number of vowels, consonants, digits and spaces using C
#include <stdio.h>
#include <ctype.h>

void main() {

  char Input_line[300];
 
  int Vowel_count = 0;
  int Consonant_count = 0;
  int Digit_count = 0;
  int Space_count = 0;

  printf("Enter the sentence you want to count vowels, consonants, digits and spaces for: \n\n");
  fgets(Input_line, sizeof(Input_line), stdin);

 
  for (int i = 0; Input_line[i] != '\0'; ++i) {

    Input_line[i] = tolower(Input_line[i]);

    if (Input_line[i] == 'a' || Input_line[i] == 'e' || Input_line[i] == 'i' ||
        Input_line[i] == 'o' || Input_line[i] == 'u') 
        {
            ++Vowel_count;
            
        }

    else if ((Input_line[i] >= 'a' && Input_line[i] <= 'z')) 
        {
            ++Consonant_count;
            
        }

    else if (Input_line[i] >= '0' && Input_line[i] <= '9') 
        {
            ++Digit_count;
            
        }

    else if (Input_line[i] == ' ') 
        {
            ++Space_count;
            
        }
  }

  printf("Total number of vowels in the sentence: %d", Vowel_count);
  printf("\nTotal number of consonants in the sentence: %d", Consonant_count);
  printf("\nTotal number of digits in the sentence: %d", Digit_count);
  printf("\nTotal number of spaces in the sentence: %d", Space_count);

}
