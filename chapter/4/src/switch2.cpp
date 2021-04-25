#include <iostream>

using namespace std;

int main()
{
  int n = 5;
  // breakを書かないとコンパイルエラーにはならないが
  // 動作は想定したものにならない
  switch (n % 3)
  {
  case 0:
    cout << "3の倍数です" << endl;
  case 1:
    cout << "3で割った余りは1です" << endl;
  case 2:
    cout << "3で割った余りは2です" << endl;
  default:
    cout << "何かがおかしいです" << endl;
  }
}
