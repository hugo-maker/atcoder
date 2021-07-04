#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
  int A, B;
  string S;
  cin >> A >> B >> S;

  bool ok = true;
  for (int i = 0; i < S.size(); ++i)
  {
    if (i == A)
    {
      if (S[i] != '-')
      {
        ok = false;
        break;
      }
    }
    else if (!isdigit(S[i]))
    {
      ok = false;
      break;
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
