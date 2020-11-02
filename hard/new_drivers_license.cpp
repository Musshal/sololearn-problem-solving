/* problem solver: musshal */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  /* dictionary */
  string yourName;
  string names[5];
  int availableAgent;
  int i;
  
  /* algorithm */
  cin >> yourName;
  names[0] = yourName;
  cin >> availableAgent;
  for (i=1;i<=4;i++){
    cin >> names[i];
  }
  
  sort(begin(names), end(names));
  
  auto pos = find(begin(names), end(names), yourName);
  auto mypos = pos-begin(names)+1;
  
  if (availableAgent == 1){
    if (mypos == 1){
      cout << 20;
    }
    else if (mypos == 2){
      cout << 40;
    }
    else if (mypos == 3){
      cout << 60;
    }
    else if (mypos == 4){
      cout << 80;
    }
    else if (mypos == 5){
      cout << 100;
    }
  }
  else if (availableAgent == 2){
    if (mypos>=1  && mypos<3){
      cout << 20;
    }
    else if (mypos>2 && mypos<5){
      cout << 40;
    }
    else{
      cout << 60;
    }
  }
  else if (availableAgent == 3){
    if (mypos>=1 && mypos<4){
      cout << 20;
    }
    else{
      cout << 40;
    }
  else if (availableAgent == 4){
    if (mypos>=1 && mypos<5){
      cout << 20;
    }
    else{
      cout << 40;
    }
  }
  else{
    cout << 20;
  }
  
  return 0;
}
