#include <iostream>

using std::cout;
using std::endl;

int euler(int n);

int main() {
  cout << "hello world!" << endl;
  euler(1000);
  return 0;
}

int euler(int n) {
  cout << "hello parameter: " << n << endl;
  return 0;
}
