#include <iostream>
#include <complex>
#include <memory>

using namespace std;

int main()
{
  using cplx = complex<double>;

  // スマートポインタを使う
  shared_ptr<cplx> p = make_shared<cplx>();
  cout << *p << endl;

  auto q = make_shared<cplx>(3., 4.);
  cout << *q << endl;

  auto r = make_shared<cplx>(*q);
  cout << *r << endl;

  // deleteで明示的に開放しなくても*p, *q, *rは開放される
}
