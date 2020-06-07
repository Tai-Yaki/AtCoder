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
  ll n, m, a, sum = 0;

  cin >> n >> m;
  for (int i = 0; i < m; i++)
  {
    cin >> a;
    sum += a;
  }

  cout << (n < sum ? -1 : n - sum) << endl;
  return 0;
}
