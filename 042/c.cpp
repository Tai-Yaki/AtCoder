#include <iostream>
#include <string>
using namespace std;

int main() {
  string money, price, dislike_number[10];
  int num;
  bool pay_flag = false;
  cin >> price >> num;
  for (int i = 0; i < num; i++) {
    cin >> dislike_number[i];
  }
  price = to_string(stoi(price) - 1);
  while (!pay_flag) {
    pay_flag = true;
    price = to_string(stoi(price) + 1);
    for (int i = 0; i < num; i++) {
      if (price.find(dislike_number[i]) != string::npos) pay_flag = false;
    }
  }

  cout << price;
  return 0;
}
