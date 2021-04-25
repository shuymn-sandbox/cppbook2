#include <iostream>

using namespace std;

int main()
{
  int n = 5;
  // switchをifで代用する
  if (n % 3 == 0)
    cout << "3の倍数です" << endl;
  else if (n % 3 == 1)
    cout << "3で割った余りは1です" << endl;
  else if (n % 3 == 2)
    cout << "3で割った余りは2です" << endl;
  else
    cout << "何かがおかしいです" << endl;
}
