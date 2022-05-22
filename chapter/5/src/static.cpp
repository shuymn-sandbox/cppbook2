#include <iostream>
using namespace std;

int f() {
  static int x = 0;
  ++x;
  return x;
}

int main() {
  cout << f() << endl; // 1
  cout << f() << endl; // 2
  cout << f() << endl; // 3
}
