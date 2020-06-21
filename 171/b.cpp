#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <cmath>
#include <algorithm>

typedef long long ll;
typedef long double ld;

using namespace std;
int main()
{
  int k, n, p[1100], sum = 0;
  cin >> n >> k;
  for (int i = 0; i < n; ++i) cin >> p[i];
  sort(p, p + n);
  for (int i = 0; i < k; ++i) sum += p[i];
  cout << sum;
}
