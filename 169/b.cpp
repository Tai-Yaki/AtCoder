#include <iostream>

using namespace std;
int main()
{
  long long n, a[110000], ans = 1, old_ans = 1;
  bool flag = false;
  cin >> n;
  for (long long i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] == 0) flag = true;
  }

  if (flag)
  {
    cout << 0 << endl;
  }
  else
  {
    for (long long i = 0; i < n; i++)
    {
      ans *= a[i];
      if (ans > 1000000000000000000 || ans / a[i] != old_ans)
      {
        flag = true;
        break;
      }
      else
      {
        old_ans = ans;
      }

    }

    if (flag)
    {
      cout << "-1" << endl;
    }
    else
    {
      cout << ans << endl;
    }
  }

  return 0;
}
