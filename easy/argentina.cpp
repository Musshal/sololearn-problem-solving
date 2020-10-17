/* problem solver: musshal */

#include <iostream>
using namespace std;

int main()
{
  /* dictionary */
  int peso, dollar, exchange;

  /* algorithm */
  scanf("%d", &peso);
  scanf("%d", &dollar);
  exchange = peso * 0.02;

  if (exchange < dollar){
    printf("Pesos");
  }
  else{
    printf("Dollars");
  }

  return 0;
}
