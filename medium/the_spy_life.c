/* problem solver: musshal */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  /* dictionary */
  char msg[29];
  int i;
  
  /* algorithm */
  gets(msg);
  
  for (i=strlen(msg)-1;i>=0;i--){
    if (isalpha(msg[i]) || isspace(msg[i])){
      printf("%c", msg[i]);
    }
  }
  
  return 0;
}
