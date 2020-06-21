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
  ll n, min_xy = 0;
  cin >> n;
  for (ll i = 1; i <= sqrt(n); ++i)
  {
    if (n % i == 0 && (min_xy == 0 || min_xy > n / i + i)) min_xy = n / i + i;
  }
  cout << min_xy - 2;
}
