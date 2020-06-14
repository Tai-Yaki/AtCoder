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
  ll n, a[200010];
  unordered_map<ll, ll> amap;

  cin >> n;
  for (ll i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (ll i = 0; i < n; i++)
  {
    amap[a[i]]++;
    if (amap[a[i]] > 1)
    {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
  return 0;
}
