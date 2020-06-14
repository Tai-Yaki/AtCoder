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
  ll n, p[200010], minp, cnt;
  cin >> n;
  for (ll i = 0; i < n; ++i)
  {
    cin >> p[i];
  }

  minp = p[0];
  cnt = 1;
  for (ll i = 1; i < n; ++i)
  {
    if (p[i] <= minp)
    {
      minp = p[i];
      ++cnt;
    }
  }

  cout << cnt << endl;
}
