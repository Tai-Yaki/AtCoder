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
  unordered_map<int, int> pmap;
  int x, n, p;
  cin >> x >> n;
  for (int i = 0; i < n; ++i)
  {
    cin >> p;
    pmap[p]++;
  }

  int cnt = 0;
  while(true)
  {
    if(pmap[x - cnt] == 0)
    {
      cout << x - cnt;
      return 0;
    }
    else if(pmap[x + cnt] == 0)
    {
      cout << x + cnt;
      return 0;
    }
    cnt++;
  }
}
