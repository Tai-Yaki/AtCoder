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
  string s, t;
  int cnt = 0;
  cin >> s >> t;
  for (int i = 0; i < s.length(); ++i)
  {
    if (s[i] != t[i]) ++cnt;
  }
  cout << cnt;
}
