#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v1;
  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(3);
  v1.push_back(4);

  vector<int> v2(4);
  v2[0] = 1;
  v2[1] = 2;
  v2[2] = 3;
  v2[3] = 4;

  vector<int> v3{1, 2, 3, 4};

  cout << (v1 == v2 ? "equal" : "not equal") << endl;
  cout << (v1 == v3 ? "equal" : "not equal") << endl;
}
