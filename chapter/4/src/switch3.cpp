#include <iostream>

using namespace std;

int main()
{
  int n = 5;
  // breakがなければ次の文も実行されるという仕様を利用して
  // 複数の場合に共通する処理をまとめて書くことができる
  switch (n % 3)
  {
  case 0:
    cout << "3の倍数です" << endl;
    break;
  case 1:
  /*FALLTHROUGH*/
  case 2:
    cout << "3の倍数ではありません" << endl;
    break;
  }
}
