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
  int n, m, s[5], c[5], ans[3];

  cin >> n >> m;

  for (int i = 0; i < n; i++) ans[i] = -1;

  for (int i = 0; i < m; i++)
  {
    cin >> s[i] >> c[i];
  }

  for (int i = 0; i < m; i++)
  {
    if (ans[s[i] - 1] != -1 && ans[s[i] - 1] != c[i])
    {
      cout << -1 << endl;
      return 0;
    }
    ans[s[i] - 1] = c[i];
  }

  if (ans[0] == 0 && n != 1)
  {
      cout << -1 << endl;
  }
  else
  {
    for (int i = 0; i < n; i++)
    {
      if (ans[i] == -1)
      {
        if (i == 0 && n != 1)
        {
          cout << 1;
        }
        else
        {
          cout << 0;
        }
      }
      else
      {
        cout << ans[i];
      }
    }
  }

  return 0;
}
