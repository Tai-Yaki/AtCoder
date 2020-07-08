#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <cmath>
#include <algorithm>

typedef long long ll;
typedef long double ld;

using namespace std;
int main()
{
  int n;
  cin >> n;
  cout << (1000 - n % 1000 == 1000 ? 0 : 1000 - n % 1000);
}
