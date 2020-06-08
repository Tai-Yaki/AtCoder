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
  ll n, a_list[200050];
  ll sum = 0;
  unordered_map<ll, ll> a_map;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a_list[i];
  }

  for (int i = 0; i < n; i++) a_map[a_list[i]]++;
  for (auto itr = a_map.begin(); itr != a_map.end(); ++itr) sum += itr -> second * (itr -> second - 1) / 2;

  for (int i = 0; i < n; i++)
  {
    cout << sum - a_map[a_list[i]] * (a_map[a_list[i]] - 1) / 2 + (a_map[a_list[i]] - 1) * (a_map[a_list[i]] - 2) / 2 << endl;
  }

  return 0;
}
