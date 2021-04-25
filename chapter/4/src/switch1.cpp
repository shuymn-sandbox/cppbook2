#include <iostream>

using namespace std;

int main()
{
  int n = 5;
  switch (n % 3)
  {
  case 0:
    cout << "3の倍数です" << endl;
    break;
  case 1:
    cout << "3で割った余りは1です" << endl;
    break;
  case 2:
    cout << "3で割った余りは2です" << endl;
    break;
  default:
    cout << "何かがおかしいです" << endl;
    break;
  }
}
