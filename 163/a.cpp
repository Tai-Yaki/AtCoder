#include <iostream>
#include <iomanip>
#include <string>
#include <unordered_map>

#define PI 3.141592653589793238462643383L

using namespace std;
int main()
{
  int r;
  cin >> r;
  cout << fixed << setprecision(15) << r * 2 * PI << endl;
  return 0;
}
