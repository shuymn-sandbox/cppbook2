#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
  double x = 0.1;
  // 10回足す
  double y = x + x + x + x + x + x + x + x + x + x;
  // 等しくならない
  cout << (y == 1.0) << endl;

  // 小数点以下20桁まで表示する
  cout << setprecision(20);
  cout << y << endl;

  // そもそもxが0.1ピッタリではない
  cout << x << endl;

  // 16進数で表示する
  cout << hexfloat;
  cout << x << endl;
  cout << defaultfloat;

  // 16進数リテラルは整数しか表現できない
  // double z = stod("0x1.999999999999ap-4");
  double z = 0x1.999999999999ap-4;
  cout << (x == z ? "eq" : "not eq") << endl;

  // 許容誤差を定めてその範囲での誤差は無視する
  double epsilon = 1e-10;
  cout << (abs(y - 1) < epsilon ? "eq" : "not eq") << endl;

  // 浮動小数点は0から離れるほど不正確になる
  double a = 9007199254740992;
  double b = a + 1;
  cout << (a == b ? "eq" : "not eq") << endl;
}
