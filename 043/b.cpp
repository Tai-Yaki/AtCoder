#include <iostream>
#include <string>

using namespace std;
int main()
{
  string input_str, display_str = "";
  cin >> input_str;
  for (int i = 0; i < input_str.length(); i++)
  {
    if (input_str.compare(i, 1, "B") == 0 && display_str.length() > 0)
    {
      display_str.erase(display_str.length() - 1);
    }
    else if (input_str.compare(i, 1, "0") == 0 || input_str.compare(i, 1, "1") == 0)
    {
      display_str += input_str[i];
    }
  }
  cout << display_str;

  return 0;
}
