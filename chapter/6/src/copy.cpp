#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  vector<int> v1{2, 3, 5, 7};
  auto v2(v1);
  cout << (v1 == v2 ? "eq" : "not eq") << endl;

  return 0;
}
