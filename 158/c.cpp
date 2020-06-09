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
  int a, b, max;
  cin >> a >> b;

  max = ((int)ceil(b * 10.0) > (int)ceil(100 * a / 8.0) ? (int)ceil(b * 10.0) : (int)ceil(100 * a / 8.0));
  if ((int)floor(max * 0.08) == a && (int)floor(max * 0.1) == b)
  {
    cout << max << endl;
  }
  else
  {
    cout << "-1" << endl;
  }

  return 0;
}
