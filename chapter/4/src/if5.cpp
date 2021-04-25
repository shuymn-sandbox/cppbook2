#include <iostream>

using namespace std;

int main()
{
  int n = 9;
  // elseは一番近いifに対応するので注意
  if (n % 3 == 0)
    if (n % 2 == 0)
      cout << "nは3の倍数かつ偶数です" << endl;
    else
      cout << "nは3の倍数ではありません" << endl;
}
