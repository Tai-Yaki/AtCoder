#include <iostream>
#include <string>

using namespace std;
int main()
{
  string S, T;

  cin >> S >> T;

  if (T.find(S) == 0 && S.length() + 1 == T.length())
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
