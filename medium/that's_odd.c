/* problem solver: musshal */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  /* dictionary */
  int size;
  int *N;
  int i, sum;
  
  /* algorithm */
  scanf("%d", &size);
  N = (int*)malloc(sizeof(int)*size;
  
  sum = 0;
  for (i=0;i<size;i++){
    scanf("%d", &N[i]);
    if (N[i] % 2 == 0){
      sum += N[i];
    }
  }
  
  printf("%d", sum);
  
  free(N);
  
  return 0;
}
