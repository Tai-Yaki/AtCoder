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
  ll n, sum = 0;
  cin >> n;
  for (ll i = 1; i <= n; i++)
  {
    if (i % 3 != 0 && i % 5 != 0)
    {
      sum += i;
    }
  }

  cout << sum << endl;
  return 0;
}
