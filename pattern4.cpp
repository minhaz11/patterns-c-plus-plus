#include <iostream>
using namespace std;
/*
pattern
A A A
B B B
C C C
*/

int main() {
  int row;
  cin >> row;
  int i = 1;
  while (i <= row) {
    int j = 1;
    while (j <= row) {
      char ch = 'A'+i-1;
      cout << ch;
      j++;
    }
    cout << endl;
    i++;
  }
}