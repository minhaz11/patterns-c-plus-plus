#include <iostream>
using namespace std;

// *****
// ****
// ***
// **
// *
int main() {
  int n; // number of row

  cout << "Please enter a number" << endl;

  cin >> n;

  int i = 1; // row index
  int counter = n;

  while (i <= n) {
    

    int k = 1;
    while (k <= counter) {
      cout << "*";
      k++;
    }
    
    cout << endl;
    i++;
    counter--; 
  }
}