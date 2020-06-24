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
  int n, a;
  unordered_map<int, int> amap;
  cin >> n;
  for (int i = 1; i <= n; ++i)
  {
    cin >> a;
    amap[a] = i;
  }
  for (int i = 1; i <= n; ++i) cout << amap[i] << " ";
}
