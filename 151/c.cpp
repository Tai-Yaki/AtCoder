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
  ll n, m, p[100010], ac = 0, wa = 0;
  string s[100010];
  unordered_map<ll, int> score;

  cin >> n >> m;
  for (ll i = 0; i < m; ++i)
  {
    cin >> p[i] >> s[i];
  }

  for (ll i = 0; i < m; ++i)
  {
    if (score[p[i]] != -1)
    {
      if (s[i] == "WA") ++score[p[i]];
      else
      {
        wa += score[p[i]];
        ++ac;
        score[p[i]] = -1;
      }

    }
  }

  cout << ac << " " << wa;
}
