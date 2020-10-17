#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  /* dictionary */
  char word[35];
  int i;
  
  /* algorithm */
  cin >> word;
  
  for (i=strlen(word)-1;i>=0;i--){
    cout << word[i];
  }
  
  return 0;
}
