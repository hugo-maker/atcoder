#include <iostream>
#include <string>
using namespace std;

int main()
{
  string S;
  cin >> S;

  if (S.size() == 1)
  {
    cout << 0 << endl;
    return 0;
  }

  int cnt = 0;
  for (int i = 1; i < S.size(); ++i)
  {
    if (S[i - 1] == '0')
    {
      if (S[i] == S[i - 1])
      {
        S[i] = '1';
        ++cnt;
      }
    }
    else
    {
      if (S[i] == S[i - 1])
      {
        S[i] = '0';
        ++cnt;
      }
    }
  }

  cout << cnt << endl;
  return 0;
}
