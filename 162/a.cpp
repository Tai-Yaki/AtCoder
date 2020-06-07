#include <iostream>
#include <iomanip>
#include <string>
#include <unordered_map>
#include <cmath>

typedef long long ll;
typedef long double ld;

using namespace std;
int main()
{
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '7')
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
