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
  ll k, sum = 0;
  cin >> k;
  for (int a = 1; a <= k; a++)
  {
    for (int b = 1; b <= k; b++)
    {
      for (int c = 1; c <= k; c++)
      {
        sum += __gcd(__gcd(a, b), c);
      }
    }
  }

  cout << sum << endl;
  return 0;
}
