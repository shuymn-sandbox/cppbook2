#include <iostream>
#include <complex>

using namespace std;

using cplx = complex<double>;

int main()
{
  cplx a;
  // NG
  // cplx a();
  // OK
  // cplx a{};
  cout << a << endl;

  cplx b(3., 4.);
  cout << b << endl;

  // 先に作成したオブジェクトをコピーして新しいオブジェクトを初期化
  cplx c(b);
  cout << c << endl;

  // 初期化してから代入もできる
  cplx d;
  d = b;
  cout << d << endl;

  // メンバ関数を呼び出す
  cout << b.real() << endl; // 実部
  cout << b.imag() << endl; // 虚部
}
