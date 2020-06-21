#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
#include <cmath>
#include <vector>
#include <algorithm>

typedef long long ll;
typedef long double ld;

using namespace std;
int main()
{
  ll n, x[10], y[10], cnt = 0;
  ld sum = 0;
  vector<int> vec;

  cin >> n;
  for (int i = 0; i < n; ++i)
  {
    cin >> x[i] >> y[i];
  }
  for (int i = 0; i < n; ++i) vec.push_back(i);
  do
  {
    ++cnt;
    for (int j = 0; j < n - 1; ++j) {
      sum += sqrtl(powl(x[vec[j]] - x[vec[j + 1]], 2) + powl(y[vec[j]] - y[vec[j + 1]], 2));
    }
  } while (next_permutation(vec.begin(), vec.end()));
  cout << fixed << setprecision(15) << sum / cnt;
}
