//Elmo Alexander, ea6dc, xToN.cpp, 1/22/18
#include <iostream>
using namespace std;

int xton(int x, int n) {
  if (n == 0) {
    return 1;
}
  else {
    return x * xton(x, n - 1);
  }
}


int main( ) {
  int x, n, z;
  cin >> x;
  cin >> n;
  z = xton(x, n);
  cout << x << " ^ " << n <<  " = " << z << endl;
  return 0;
}
