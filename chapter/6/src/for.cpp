#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  vector<int> v{2, 3, 5, 7};

  for (auto x : v)
    cout << x << ", ";
  cout << endl;

  for (auto &x : v)
    ++x;

  for (auto x : v)
    cout << x << ", ";
  cout << endl;

  return 0;
}
