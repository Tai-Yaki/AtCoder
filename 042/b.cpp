#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, l;
  string str[100], work;

  cin >> n >> l;
  for (int i = 0; i < n; i++) {
    cin >> str[i];
  }
  for (int j = 0; j < n - 1; j++) {
    for (int k = 0; k < n - 1 - j; k++) {
      if (str[k].compare(str[k + 1]) > 0) {
        work = str[k];
        str[k] = str[k + 1];
        str[k + 1] = work;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << str[i];
  }

  return 0;
}
