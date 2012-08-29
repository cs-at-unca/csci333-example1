#include <iostream>

using std::cout;
using std::endl;

int euler(int n);

int main() {
  cout << "hello world!" << endl;
  cout << "result: " << euler(1000) << endl;
  return 0;
}

int euler(int n) {
  int sum = 0;

  for(int i = 0; i < n; ++i) {
    sum += i;
  }

  return sum;
}
