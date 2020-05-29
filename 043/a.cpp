#include <iostream>
#include <string>

using namespace std;
int main()
{
  int n, candy_num = 0;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    candy_num += i;
  }
  cout << candy_num;

  return 0;
}
