/* problem solver: musshal */

#include <stdio.h>
#include <string.h>

int main()
{
  /* dictionary */
  char sentence[20];
  char *token;
  char firstchar;
  
  /* algorithm */
  gets(sentence);
  
  token = strtok(sentence, " ");
  
  while (token != NULL){
    firstchar = token[0];
    token++;
    printf("%s%cay ", token, firstchar);
    token = strtok(NULL, " ");
  }
  
  return 0;
}
