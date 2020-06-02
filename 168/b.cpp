#include <iostream>
#include <string>

using namespace std;
int main()
{
  string S;
  int K;
  cin >> K >> S;

  if (S.length() <= K)
  {
    cout << S << endl;
  }
  else
  {
    cout << S.substr(0, K) << "..." << endl;
  }

  return 0;
}
