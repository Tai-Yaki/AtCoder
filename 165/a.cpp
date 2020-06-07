#include <iostream>

using namespace std;
int main()
{
  int k, a, b;
  cin >> k >> a >> b;

  for (int i = k; i <= b; i += k)
  {
    if (a <= i && i <= b)
    {
      cout << "OK" << endl;
      return 0;
    }
  }

  cout << "NG" << endl;
  return 0;
}
