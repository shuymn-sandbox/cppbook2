#include <iostream>

using namespace std;

int main()
{
  // 算術演算子
  cout << (10 / 4) << endl;
  cout << (1 / 3) << endl;
  cout << (10 % 4) << endl;

  // 複数の演算子
  cout << (1 + 2 * 3) << endl;

  // 優先順位
  cout << ((1 + 2) * 3) << endl;

  // 暗黙の型変換
  cout << (1 / 3) << endl;
  cout << (1 / 3.0) << endl;

  // 比較演算子
  cout << (1 < 2) << endl;
  cout << (3 < 2) << endl;

  // 論理演算子
  cout << (1 < 2 && 2 < 3) << endl;
  cout << (1 < 2 && 3 < 2) << endl;
  cout << (2 < 1 || 1 < 2) << endl;
  cout << (!(2 < 1)) << endl;

  // 論理演算子と暗黙の型変換
  cout << (1 < 2 && 0) << endl;
  cout << (0 || 1 < 2) << endl;

  // ビット演算子
  int a = 0b101, b = 0b011;
  cout << (a & b) << endl; // 0b001
  cout << (a | b) << endl; // 0b111
  cout << (a ^ b) << endl; // 0b110
  cout << (~a) << endl;    // 補数

  // ビットシフト
  int c = 0b101;
  cout << (c >> 1) << endl; // 0b10
  cout << (c >> 2) << endl; // 0b1
  cout << (c << 1) << endl; // 0b1010
  cout << (c << 2) << endl; // 0b10100

  // 代入演算子
  int d = 0;
  cout << (d = 5) << endl; // 評価結果
  cout << d << endl;       // 副作用

  // 右結合
  int e, f;
  cout << (e = f = 5) << endl;
  cout << e << endl;
  cout << f << endl;

  // 副作用
  int g = 0;
  g = 1.2;
  cout << g << endl;

  // キャスト
  int h = 0;
  h = static_cast<int>(1.1);
  cout << h << endl;
  h = (int)1.2;
  cout << h << endl;
  h = int(1.3);
  cout << h << endl;

  // 複合代入演算子
  int i = 5;
  i += 5;
  cout << i << endl;

  // インクリメント
  int j = 5, k = 5;

  // 後置インクリメント
  cout << (j++) << endl;
  cout << j << endl;

  // 前置インクリメント
  cout << (++k) << endl;
  cout << k << endl;

  // 条件演算子
  cout << (2 < 1 ? "ABC" : "DEF") << endl;

  // コンマ演算子
  int m = 0;
  // 2つの式を左、右の順に評価し、右側の式の評価結果を全体の評価結果とする
  cout << (m = 1, m + 2) << endl;

  // 被演算子の評価順序は決まっていないので注意する
  int n = 5;
  n = --n / --n;
  cout << n << endl;
}
