#include <iostream>
using namespace std;

int main() {
	int num[3], five = 0, seven = 0;
  cin >> num[0] >> num[1] >> num[2];

  for (int i = 0; i < 3; i++) {
    if (num[i] == 5) {
      five++;
    }
    else if (num[i] == 7) {
      seven++;
    }
  }
  if (five == 2 && seven == 1) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }
}
