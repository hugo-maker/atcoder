#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int start = 0;
  for (int i = 0; i < s.size(); ++i)
  {
    if (s[i] == 'A')
    {
      start = i;
      break;
    }
  }
  int end = s.size() - 1;
  for (int i = s.size() - 1; i >= 0; --i)
  {
    if (s[i] == 'Z')
    {
      end = i;
      break;
    }
  }

  cout << end - start + 1 << endl;
  return 0;
}
