#include <iostream>
using namespace std;
/*
pattern

1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/

int main() {
  int row;
  cin >> row;
  int i = row;

  while (i) {
    //Print number triangle shape 1
    int j = 1;
    while (j <= i) {
      cout << j << " ";
      j++;
    }

   
    //Print star triangle shape 1
    int k = 1;
    int dis = row - i;
    while (k <= dis) {
      cout << "*" << " ";
      k++;
    }

   //Print star triangle shape 2
    int y = 1;

    while (y <= dis) {
      cout << "*" << " ";
      y++;
    }

     //Print number triangle shape 2
    int l = i;
    while (l) {
      cout << l << " ";
      l--;
    }

     
    cout << endl;
    i--;
  }
}