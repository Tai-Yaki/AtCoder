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
  string s_in, s[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
  cin >> s_in;
  for (int i = 0; i < 7; ++i)
  {
    if (s_in == s[i])
    {
      cout << 7 - i;
      return 0;
    }
  }
}
