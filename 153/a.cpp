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
  ll h, a;
  cin >> h >> a;
  cout << (int)ceil((ld)h / a) << endl;
}
