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
  int n, ac = 0, wa = 0, tle = 0, re = 0;
  string s[100010];
  cin >> n;
  for (int i = 0; i < n; ++i) cin >> s[i];
  for (int i = 0; i < n; ++i)
  {
    if (s[i] == "AC") ++ac;
    if (s[i] == "WA") ++wa;
    if (s[i] == "TLE") ++tle;
    if (s[i] == "RE") ++re;
  }
  cout << "AC x " << ac << endl;
  cout << "WA x " << wa << endl;
  cout << "TLE x " << tle << endl;
  cout << "RE x " << re << endl;
}
