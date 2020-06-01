#include <iostream>
#include <cmath>

using namespace std;
bool IsPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false;

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
  long long n, cnt = 0, a[110000], ans_cnt = 0;

  cin >> n;
  if (IsPrime(n))
  {
    ans_cnt = 1;
  }
  else
  {
    for (long long i = 2; i <= n; i++)
    {
      if (n % i == 0)
      {
        a[cnt] = 0;
        while (n % i == 0)
        {
          a[cnt]++;
          n /= i;
        }
        cnt++;
      }
    }

    for (long long j = 0; j < cnt; j++)
    {
      for (long long k = 1; k <= a[j]; k++)
      {
        if (k <= a[j])
        {
          ans_cnt++;
          a[j] -= k;
        }
      }
    }
  }

  cout << ans_cnt << endl;
}
