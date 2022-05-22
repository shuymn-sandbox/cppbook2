#include <iostream>
#include <regex>
using namespace std;

void checkZip(const string &zip) {
  regex rx(R"(\d{3}-\d{4})");

  cout << zip << ": ";
  if (regex_match(zip, rx)) {
    cout << "OK\n";
  } else {
    cout << "NG\n";
  }
}

int main(int argc, char *argv[]) {
  string zips[]{"153-0042", "194-00134"};
  for (const auto &zip : zips) {
    checkZip(zip);
  }

  return 0;
}
