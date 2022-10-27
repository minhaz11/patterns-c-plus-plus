#include <iostream>
using namespace std;
/*
pattern
A B C
A B C
A B C
*/

int main() {
  int row;
  cin >> row;
  int i = 1;
  while (i <= row) {
    int j = 1;
    while (j <= row) {
      char ch = 'A'+j-1;
      cout << ch;
      j++;
    }
    cout << endl;
    i++;
  }
}