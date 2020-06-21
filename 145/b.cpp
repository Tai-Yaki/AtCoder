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
  int n;
  string s;
  cin >> n >> s;
  if (n % 2 == 1)
  {
    cout << "No";
    return 0;
  }
  for (int i = 0; i < n / 2; ++i)
  {
    if (s[i] != s[i + n / 2])
    {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
}
