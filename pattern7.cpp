#include <iostream>
using namespace std;
/*
pattern
A B C
B C D
C D E
*/

int main() {
  int row;
  cin >> row;
  int i = 1;
  
  while (i <= row) {
    int j = 1;
    while (j <= row) {
      char ch = 'A' + i + j - 2;
      cout << ch << " ";
      j++;
    }
    cout << endl;
    i++;
  }
}