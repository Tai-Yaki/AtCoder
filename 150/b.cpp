#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
#include <cmath>
#include <algorithm>

typedef long long ll;
typedef long double ld;

using namespace std;
int main()
{
  ll n, cnt = 0;
  string s;
  cin >> n >> s;
  for (int i = 0; i < s.length() - 2; ++i)
  {
    if (s[i] == "A"[0] && s[i + 1] == "B"[0] && s[i + 2] == "C"[0]) ++cnt;
  }
  cout << cnt;
}
