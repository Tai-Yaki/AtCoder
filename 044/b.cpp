#include <iostream>
#include <string>

using namespace std;
int main() {
  string str;
  int char_num;
  bool cout_flag = false;
  cin >> str;

  for (int j = 0; j < str.length(); j++)
  {
    char_num = 0;
    for (int k = 0; k < str.length(); k++)
    {
      if (str[j] == str[k])
      {
        char_num++;
      }
    }
    if (char_num % 2 == 1)
    {
      cout << "No";
      cout_flag = true;
      break;
    }
  }
  if (!cout_flag)
  {
    cout << "Yes";
  }

  return 0;
}
