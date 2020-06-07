#include <iostream>
#include <iomanip>
#include <string>
#include <unordered_map>
#include <cmath>
#include <algorithm>

typedef long long ll;
typedef long double ld;

using namespace std;
int main()
{
  int x, a, b;
  cin >> x;
  a = x / 500 * 1000;
  b = x % 500 / 5 * 5;
  cout << a + b << endl;
  return 0;
}
