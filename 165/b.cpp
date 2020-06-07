#include <iostream>

using namespace std;
int main()
{
  long long x, cnt = 0, money = 100;
  cin >> x;

  while (money < x)
  {
    money *= 1.01;
    cnt++;
  }

  cout << cnt << endl;
  return 0;
}
