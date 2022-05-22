#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  string str = "私の郵便番号は123-4567、あなたの郵便番号は987-6543です。";
  regex rx(R"(\d{3}-\d{4})");
  sregex_iterator it(str.begin(), str.end(), rx);
  sregex_iterator end;
  while (it != end) {
    cout << (it++)->str() << endl;
  }

  return 0;
}
