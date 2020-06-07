#include <iostream>

using namespace std;
int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  while (a > 0 && c > 0)
  {
    a -= d;
    c -= b;
  }

  cout << ((a <= 0 && c > 0) ?  "No" : "Yes") << endl;
}
