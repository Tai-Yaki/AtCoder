#include <iostream>

using namespace std;
int main() {
  int n, k, x, y, price;
  cin >> n >> k >> x >> y;
  if (n <= k)
  {
    price = n * x;
  }
  else
  {
    price = k * x + (n - k) * y;
  }
  cout << price;

  return 0;
}
