/* problem solver: musshal */

#include <stdio.h>
#include <math.h>

int main()
{
  /* dictionary */
  int color, cost;

  /* main program */
  scanf("%d", &color);

  cost = round(((5*color)+40) + (((5*color)+40)/10));
  printf("%d", cost);

  return 0;
}
