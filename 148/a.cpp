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
  int a, b;
  cin >> a >> b;
  if (a == 1)
  {
    if (b == 2) cout << 3;
    if (b == 3) cout << 2;
  }
  if (a == 2)
  {
    if (b == 1) cout << 3;
    if (b == 3) cout << 1;
  }
  if (a == 3)
  {
    if (b == 1) cout << 2;
    if (b == 2) cout << 1;
  }
}
