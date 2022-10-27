#include <iostream>
using namespace std;

int main() {
/*Pattern 
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
*/
  int row, counter = 1;
  cin >> row;
  int i = 1;
  while (i <= row) {
    int j = 1;
    while (j <= row) {
      cout << counter++;
      j++;
    }
    cout << endl;
    i++;
  }
}