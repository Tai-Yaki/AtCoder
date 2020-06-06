#include <iostream>

using namespace std;
int main()
{
  int n, k, d[110], a[110][110], scnt = 0;
  bool sok[110];
  cin >> n >> k;

  for (int i = 0; i < n; i++)
  {
    sok[i] = false;
  }

  for (int i = 0; i < k; i++)
  {
    cin >> d[i];
    for (int j = 0; j < d[i]; j++)
    {
      cin >> a[i][j];
      sok[a[i][j] - 1] = true;
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (!sok[i]) scnt++;
  }

  cout << scnt << endl;
  return 0;
}
