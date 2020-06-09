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
  ll n, a, b, blue;
  cin >> n >> a >> b;
  blue = (n / (a + b)) * a + (n % (a + b) > a ? a : n % (a + b));
  cout << blue << endl;

  return 0;
}
