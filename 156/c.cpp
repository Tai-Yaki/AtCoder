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
  ll n, x[110], sum = 0, p;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> x[i];

  for (int i = 0; i < n; i++) sum += x[i];
  p = (int)round((double)sum / n);

  sum = 0;
  for (int i = 0; i < n; i++) sum += (int)pow(x[i] - p, 2);

  cout << sum << endl;
  return 0;
}
