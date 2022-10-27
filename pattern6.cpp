#include <iostream>
using namespace std;
/*
pattern
A B C
D E F
G H I
*/

int main() {
  int row;
  cin >> row;
  int i = 1;
  int value = 1;
  while (i <= row) {
    int j = 1;
    while (j <= row) {
      char ch = 'A'+value - i;
      cout << ch << " ";
      j++;
      value++;
    }
    cout << endl;
    value++;
    i++;
  }
}