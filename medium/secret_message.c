/* problem solver: musshal */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  /* dictionary */
  char letter[29];
  int i;
  
  /* algorithm */
  gets(letter);
  
  for (i=0;i<=strlen(letter)-1;i++){
    if (!isspace(letter[i])){
      letter[i] = tolower(letter[i]);
      letter[i] = 'z' - letter[i] + 'a';
    }
  }
  
  printf("%s", letter);
  
  return 0;
}
