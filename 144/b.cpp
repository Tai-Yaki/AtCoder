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
  int n;
  cin >> n;
  for (int i = 1; i < 10; ++i)
    for (int j = 1; j < 10; ++j)
      if (i * j == n)
      {
        cout << "Yes";
        return 0;
      }
  cout << "No";
}
