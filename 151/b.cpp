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
  ll n, k, m, a[110], sum = 0;
  cin >> n >> k >> m;
  for (int i = 0; i < n - 1; ++i)
  {
    cin >> a[i];
  }

  for (int i = 0; i < n - 1; ++i)
  {
    sum += a[i];
  }
  if (n * m - sum > k) cout << "-1";
  else cout << (n * m - sum < 0 ? 0 : n * m - sum);
}
