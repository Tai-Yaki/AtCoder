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
  ll n, k;
  cin >> n >> k;
  cout << (n % k > k - (n % k) ? k - (n % k) : n % k) << endl;
}
