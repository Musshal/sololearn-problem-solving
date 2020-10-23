/* problem solver: musshal */

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  /* dictionary */
  string string;
  int i;
  
  /* algorithm */
  getline(cin, string);
  
  for (i=0;i<=string.length();i++){
    if (isalpha(string[i]) || isdigit(string[i]) || isspace(string[i])){
      cout << string[i];
    }
  }
  
  return 0;
}
