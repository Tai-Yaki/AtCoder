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
  ld t, l;
  cin >> l;
  l /= 3;
  l = l * l * l;
  cout << fixed << setprecision(15) << l << endl;
}
