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
  int a;
  string s;
  cin >> a >> s;
  if (a >= 3200)
    cout << s;
  else
    cout << "red";
}
