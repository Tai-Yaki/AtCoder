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
  ll n, mx = 0;
  string s[200010];
  map<string, ll> poll;

  cin >> n;
  for (ll i = 0; i < n; ++i)
  {
    cin >> s[i];
  }

  for (ll i = 0; i < n; ++i)
  {
    poll[s[i]]++;
    if (mx < poll[s[i]]) mx = poll[s[i]];
  }

  for (auto itr = poll.begin(); itr != poll.end(); ++itr)
  {
    if (itr->second == mx) cout << itr->first << endl;
  }

  return 0;
}
