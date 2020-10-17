/* problem solver: musshal */

#include <stdio.h>

int main()
{
  /* dictionary */
  int cheer, i;

  /* algorithm */
  scanf("%d", &cheer);

  if (cheer<1){
    printf("Shh");
  }
  else if (cheer>10){
    printf("High Five");
  }
  else if (cheer<=10){
    for (i=1;i<=cheer;i++){
      printf("Ra!");
    }
  }

  return 0;
}
