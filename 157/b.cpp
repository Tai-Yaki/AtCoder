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
  int a[3][3], n, b[10];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> a[i][j];
    }
  }
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      for (int k = 0; k < n; k++)
      {
        if (a[i][j] == b[k])
        {
          a[i][j] = -1;
        }
      }
    }
  }

  bool flag;
  for (int i = 0; i < 3; i++)
  {
    flag = true;
    for (int j = 0; j < 3; j++)
    {
      if (a[i][j] != -1) flag = false;
    }
    if (flag)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  for (int i = 0; i < 3; i++)
  {
    flag = true;
    for (int j = 0; j < 3; j++)
    {
      if (a[j][i] != -1) flag = false;
    }
    if (flag)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  flag = true;
  for (int i = 0; i < 3; i++)
  {
    if (a[i][i] != -1) flag = false;
  }
  if (flag)
  {
    cout << "Yes" << endl;
    return 0;
  }

  flag = true;
  for (int i = 0; i < 3; i++)
  {
    if (a[i][2 - i] != -1) flag = false;
  }
  if (flag)
  {
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;
  return 0;
}
