#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main()
{
  string str, addStr, binaryStr, a;
  long long score = 0, l;
  cin >> str;

  if (str.length() > 1)
  {
    for (int j = 0; j < (int)pow(2, str.length() - 1); j++)
    {
      binaryStr = "";
      l = j;
      for (int k = 0; k < str.length() - 1; k++)
      {
        if (l % 2)
        {
          binaryStr.append("1");
        }
        else
        {
          binaryStr.append("0");
        }
        l /= 2;
      }

      addStr = str[0];
      for (int k = 0; k < binaryStr.length(); k++)
      {
        if (binaryStr[k] == '1')
        {
          addStr += "+";
        }
        addStr += str[k + 1];
      }

      while(true)
      {
        int pos = addStr.find("+");
        if(pos == string::npos)
        {
          score += stoll(addStr);
          break;
        }
        else
        {
          score += stoll(addStr.substr(0, pos));
          addStr.erase(0, pos + 1);
        }
      }
    }
  }
  else
  {
    score = stoi(str);
  }

  cout << score;

  return 0;
}
