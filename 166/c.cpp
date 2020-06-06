#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;
int main()
{
  ll n, m, h[100010], a, b, mx[100010] = {}, ans = 0;

  cin >> n >> m;
  for (int i = 1; i <= n; i++)
  {
    cin >> h[i];
  }
  for (int i = 0; i < m; i++)
  {
    cin >> a >> b;
    mx[a] = (mx[a] < h[b] ? h[b] : mx[a]);
    mx[b] = (mx[b] < h[a] ? h[a] : mx[b]);
  }

  for (int i = 1; i <= n; i++)
  {
    ans += h[i] > mx[i];
  }

  cout << ans << endl;
  return 0;
}
