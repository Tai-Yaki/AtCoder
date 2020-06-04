#include <iostream>
#include <string>

using namespace std;
int main()
{
  long long A, B, C, K, SUM = 0;
  cin >> A >> B >> C >> K;

  if (A >= K)
  {
    SUM += K;
    K = 0;
  }
  else
  {
    SUM += A;
    K -= A;
  }

  if (B >= K)
  {
    K = 0;
  }
  else
  {
    K -= B;
  }

  if (C >= K)
  {
    SUM -= K;
    K = 0;
  }
  else
  {
    SUM -= C;
    K -= C;
  }

  cout << SUM << endl;

  return 0;
}
