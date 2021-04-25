#include <iostream>

using namespace std;

int main()
{
  enum class choice1
  {
    ROCK,
    SCISSORS,
    PAPER
  };

  choice1 x = choice1::ROCK;
  cout << (x == choice1::ROCK ? "グー" : "グー以外") << endl;

  // 以前の定義方法
  enum choice2
  {
    rock,
    scissors,
    paper
  };

  choice2 y = rock;
  cout << y << endl;

  // NG(名前が重複)
  // int rock = 1;

  // OK
  int ROCK = 1;
}
