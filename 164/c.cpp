#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
int main()
{
  long long n;
  string str;
  unordered_map<string, bool> kuji;

  cin >> n;
  for (long long i = 0; i < n; i++)
  {
    cin >> str;
    kuji[str] = true;
  }

  cout << kuji.size() << endl;
  return 0;
}
