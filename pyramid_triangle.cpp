#include <iostream>
using namespace std;

//     *
//    ***
//   *****
//  *******
// *********
int main() {
  int n; // number of row

  cout << "Please enter a number" << endl;

  cin >> n;

  int i = 1; // row index
  int nextNumber = 1;

  while (i <= n) {
    int j = 1; // column number
    int distance = n - i;
    while (j <= distance) {
      cout << " ";
      j++;
    }

    int k = 1;
    while (k <= nextNumber) {
      cout << "*";
      k++;
    }
    
    cout << endl;
    i++;
    nextNumber +=2; 
  }
}