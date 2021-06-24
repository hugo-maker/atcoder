#include <iostream>
#include <string>
using namespace std;

int main()
{
  string S;
  cin >> S;
  bool ok = true;
  for (size_t i = 0; i < S.size(); ++i)
  {
    char c = S[i];
    // 奇数 
    if (i % 2 == 0)
    {
      if (c == 'R' ||
          c == 'U' ||
          c == 'D')
      {
        continue;
      }
      else
      {
        ok = false;
        break;
      }
    }
    // 偶数 
    else
    {
      if (c == 'L' ||
          c == 'U' ||
          c == 'D')
      {
        continue;
      }
      else
      {
        ok = false;
        break;
      }
    }
  }

  if (ok)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
