#include <iostream>

using namespace std;

int main()
{
  unsigned a = 1;
  int b = -3;
  // int型の値がunsigned型に変換されることでバグる
  cout << a + b << endl;

  unsigned x = 10;
  cout << (-1 <= x ? "小さくない" : "小さい") << endl;
}
