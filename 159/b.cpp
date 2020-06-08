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
  string s, s_rev, s_span;
  cin >> s;
  s_rev = s;

  reverse(s_rev.begin(), s_rev.end());
  if (s == s_rev)
  {
    s_span = s.substr(0, (s.length() - 1) / 2);
    s_rev = s_span;
    reverse(s_rev.begin(), s_rev.end());
    if (s_span == s_rev)
    {
      s_span = s.substr((s.length() + 3) / 2 - 1, s.length() - ((s.length() + 3) / 2 - 1));
      s_rev = s_span;
      reverse(s_rev.begin(), s_rev.end());
      if (s_span == s_rev)
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}
