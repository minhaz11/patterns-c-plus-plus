#include <iostream>
using namespace std;
/*
pattern
1
22
333
4444
*/

int main() {
  int row;
  cin >> row;
  int i = 1;
  while (i <= row) {
    int j = 1;
    while (j <= i) {
      cout << i;
      j++;
    }
    cout << endl;
    i++;
  }
}