#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
#include <cmath>
#include <algorithm>

typedef long long ll;
typedef long double ld;

using namespace std;
int main()
{
  ll a, b, k;
  cin >> a >> b >> k;
  if (a >= k)
  {
    cout << a - k << " " << b << endl;
  }
  else if (a + b < k)
  {
    cout << "0 0" << endl;
  }
  else
  {
    cout << "0 " << b - (k - a) << endl;
  }
}
