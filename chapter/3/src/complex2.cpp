#include <iostream>
#include <complex>

using namespace std;

using cplx = complex<double>;

int main()
{
  cplx *p = new cplx;
  // どちらもOK
  // cplx *p = new cplx();
  // cplx *p = new cplx{};
  cout << *p << endl;

  cplx *q = new cplx(3., 4.);
  cout << *q << endl;

  cplx *r = new cplx(*q);
  cout << *r << endl;

  cout << (*q).real() << endl;
  cout << (*q).imag() << endl;

  // アロー演算子を使うと簡潔に記述できる
  cout << q->real() << endl;
  cout << q->imag() << endl;

  // フリーストア(ヒープ領域)に配置されたオブジェクトは
  // ブロックの終わりで開放されない(プログラムが終了すれば開放される)
  delete p;
  delete q;
  delete r;
}
