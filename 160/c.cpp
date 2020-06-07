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
  ll k, n, sum, max = -1, first_a, a, old_a = 0;
  cin >> k >> n;
  for (ll i = 0; i < n; ++i)
  {
    cin >> a;
    if (i == 0) first_a = a;
    if (a - old_a > max)
    {
      max = a - old_a;
    }
    old_a = a;
  }
  if (k - a + first_a > max) max = k - a + first_a;

  cout << k - max << endl;
  return 0;
}
