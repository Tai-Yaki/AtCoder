#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
#include <cmath>
#include <algorithm>

typedef long long ll;
typedef long double ld;

using namespace std;
int main()
{
  ll n, cnt = 0, a[100010], aa[100010];
  bool flag;
  cin >> n;
  for (ll i = 0; i < n; ++i)
  {
    cin >> a[i];
  }
  for (ll i = 0; i < n; ++i)
  {
    aa[a[i]]++;
  }

  for (ll i = 0; i < n; ++i)
  {
    flag = true;
    for (ll j = 2; j * j <= a[i]; ++j)
    {
      if (a[i] % j == 0 && aa[j] != 0)
      {
        flag = false;
        cout << a[i] << endl;
      }
    }
    if (flag) cnt++;
  }

  cout << cnt;
}
