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
  string s;
  cin >> s;
  if (s == "Sunny")
    cout << "Cloudy";
  else if (s == "Cloudy")
    cout << "Rainy";
  else
    cout << "Sunny";
}
