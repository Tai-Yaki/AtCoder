#include <iostream>
#include <cmath>

using namespace std;
int main()
{
  long long N, M, X, C[15], A[15][15], MONEY = 0, MIN_MONEY = -1;
  bool err = false;
  cin >> N >> M >> X;

  for (int j = 0; j < N; j++)
  {
    cin >> C[j];
    for (int k = 0; k < M; k++)
    {
      cin >> A[j][k];
    }
  }

  for (int j = 0; j < (1 << N); j++)
  {
    long long SCORE[15] = {0};
    err = false;
    MONEY = 0;
    for (int k = 0; k < N; k++)
    {
      if (j & (1 << k))
      {
        MONEY += C[k];
        for (int l = 0; l < M; l++)
        {
          SCORE[l] += A[k][l];
        }
      }
    }
    for (int l = 0; l < M; l++)
    {
      if (SCORE[l] < X)
      {
        err = true;
        break;
      }
    }
    if (!err && (MIN_MONEY < 0 || MIN_MONEY > MONEY))
    {
      MIN_MONEY = MONEY;
    }
  }

  if (MIN_MONEY < 0)
  {
    cout << "-1" << endl;
  }
  else
  {
    cout << MIN_MONEY << endl;
  }
}
