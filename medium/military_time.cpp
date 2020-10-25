/* problem solver: musshal */

#include <iostream>
using namespace std;

int main()
{
  /* dictionary */
  string clock;
  int i;
  
  /* algorithm */
  getline(cin, clock);
  
  if (isspace(clock[4])){
    if (clock[5] == 'A'){
      cout << 0;
      for (i=0;i<4;i++){
        cout << clock[i];
      }
    }
    else{
      if (clock[5] == 'P'){
        if (clock[0] < '8'){
          clock[0] += 2;
          cout << 1;
          for (i=0;i<4;i++){
              cout << clock[i];
          }
        }
        else{
          clock[0] -= 8;
          cout << 2;
          for (i=0;i<4;i++){
            cout << clock[i];
          }
        }
      }
    }
  }
  else{
    if (clock[6] == 'A'){
      for (i=0;i<5;i++){
        cout << clock[i];
      }
    }
    else{
      if (clock[6] == 'P'){
        if (clock[0]=='1' && clock[1]=='2'){
          clock[0] = '0';
          clock[1] = '0';
          for (i=0;i<5;i++){
            cout << clock[i];
          }
        }
        else{
          clock[0] += 1;
          clock[1] += 2;
          for (i=0;i<5;i++){
            cout << clock[i];
          }
        }
      }
    }
  }
  
  return 0;
}
