#include <iostream>
#include <string>
using namespace std;

int main()
{
  string S;
  cin >> S;

  bool one = false;
  bool two = false;
  bool three = true;;
  if (S[0] == 'A')
  {
    one = true;
  }

  int count = 0;
  for (int i = 1; i <= S.size(); ++i)
  {
    if (isupper(S[i]))
    {
      if (i >= 2 && i <= S.size() - 2 && S[i] == 'C')
      {
        ++count;
      }
      else
      {
        three = false;
        break;
      }
    }
  }

  if (count == 1)
  {
    two = true;
  }

  if (one && two && three)
  {
    cout << "AC" << endl;
  }
  else
  {
    cout << "WA" << endl;
  }

  return 0;
}
