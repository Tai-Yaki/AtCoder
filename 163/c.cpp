#include <iostream>
#include <iomanip>
#include <string>
#include <unordered_map>
#include <cmath>

typedef long long ll;
typedef long double ld;

using namespace std;
int main()
{
  ll n, s;
  unordered_map<ll, ll> buka_num;

  cin >> n;
  for (ll i = 1; i <= n; i++)
  {
    buka_num[i] = 0;
  }
  for (ll i = 0; i < n - 1; i++)
  {
    cin >> s;
    buka_num[s] = buka_num[s] + 1;
  }
  for (ll i = 1; i <= n; i++)
  {
    cout << buka_num[i] << endl;
  }

  return 0;
}
