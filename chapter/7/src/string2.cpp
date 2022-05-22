
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  string str1 = "Hello, ";
  string str2 = "World!";

  cout << str1.find("World") << endl;
  if (str1.find("world") == string::npos)
    cout << "not found" << endl;

  cout << str1.rfind("o") << endl;

  str1.replace(7, 5, "Japan");
  cout << str1 << endl;

  cout << str1.substr(7, 5) << endl;

  return 0;
}
