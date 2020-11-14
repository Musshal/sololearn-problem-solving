#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  /* dictionary */
  char string[15];
  int i, numbers, sum, alpha, sp;
  
  /* algorithm */
  gets(string);
  
  numbers = 0;
  alpha = 0;
  sum = 0;
  for (i=0;i<=(strlen(string)-1);i++){
    sum++;
    if (isdigit(string[i])){
      numbers++;
    }
    else if (isalpha(string[i])){
      alpha++;
    }
    else{
      sp = sum-(numbers+alpha);
    }
  }
  
  if (numbers>=2 && sp>=2 && sum>=7){
    printf("Strong");
  }
  else{
    printf("Weak");
  }
  
  return 0;
}
