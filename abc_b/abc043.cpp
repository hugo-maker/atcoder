#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s, res;
  cin >> s;
  for (int i = 0; i < s.size(); ++i)
  {
    if (s[i] == 'B')
    {
      if (!res.empty())
      {
        res.pop_back();
      }
    }
    else
    {
      res.push_back(s[i]);
    }
  }

  cout << res << endl;
  return 0;
}
