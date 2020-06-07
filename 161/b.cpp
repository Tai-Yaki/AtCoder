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
  ll m, n, a[110], poll = 0, sum = 0;
  cin >> n >> m;
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
    poll += a[i];
  }
  for (int i = 0; i < n; ++i)
  {
    if (a[i] * 4 * m >= poll) sum++;
  }

  cout << (m <= sum ? "Yes" : "No") << endl;
  return 0;
}
