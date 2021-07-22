#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s, t;
  cin >> s >> t;

  bool can = false;
  int start = 0;
  for (int i = 0; i < s.size(); ++i)
  {
    int cnt = 0;
    for (int j = 0; j < t.size(); ++j)
    {
      if (s[i + j] == t[j])
      {
        ++cnt;
        if (cnt == t.size())
        {
          can = true;
          start = i;
        }
      }
      else if (s[i + j] == '?')
      {
        ++cnt;
        if (cnt == t.size())
        {
          can = true;
          start = i;
        }
      }
      else
      {
        break;
      }
    }
  }

  if (can)
  {
    for (int i = 0; i < s.size();)
    {
      if (i == start)
      {
        cout << t;
        i += t.size();
      }
      else
      {
        if (s[i] == '?')
        {
          cout << 'a';
          ++i;
        }
        else
        {
          cout << s[i];
          ++i;
        }
      }
    }
  }
  else
  {
    cout << "UNRESTORABLE";
  }

  cout << endl;
  return 0;
}
