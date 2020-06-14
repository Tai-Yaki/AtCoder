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
  ll h, n, a[100010];
  cin >> h >> n;
  for (ll i = 0; i < n; ++i)
  {
    cin >> a[i];
  }

  for (ll i = 0; i < n; ++i)
  {
    h -= a[i];
  }

  cout << (h > 0 ? "No" : "Yes") << endl;
}
