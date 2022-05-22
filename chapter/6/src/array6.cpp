#include <iostream>
#include <memory>
using namespace std;

auto f() {
  unique_ptr<int[]> a(new int[4]{2, 3, 5, 7});
  return a;
}

int main(int argc, char *argv[]) {
  auto a = f();
  for (size_t i = 0; i < 4; ++i) {
    cout << a[i] << ", ";
  }
  cout << endl;

  return 0;
}
