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
  ll n, k, h[200010] = {}, sum = 0;
  cin >> n >> k;
  for (ll i = 0; i < n; ++i) cin >> h[i];
  sort(h, h + n, greater<>());
  for (ll i = 0; i < n; ++i)
  {
    if (k > 0)
    {
      k--;
    }
    else
    {
      sum += h[i];
    }
  }

  cout << sum;
}
