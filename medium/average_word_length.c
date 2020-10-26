/* problem solver: musshal */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
  /* dictionary */
  char string[53];
  int i;
  float letter, word;
  
  /* algorithm */
  gets(string);
  
  letter = 0;
  word = 1;
  for (i=0;i<=strlen(string)-1;i++){
    if (isalpha(string[i])){
      letter++;
    }
    else{
      if (isspace(string[i])){
        word++;
      }
    }
  }
  
  printf("%.f", ceil(letter/word));
  
  return 0;
  }
