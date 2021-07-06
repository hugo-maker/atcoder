#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  string S;
  cin >> S;
  vector<bool> a(26, false);

  for (int i = 0; i < S.size(); ++i)
  {
    a[S[i] - 'a'] = true;
  }

  for (int i = 0; i < 26; ++i)
  {
    if (!a[i])
    {
      cout << char('a' + i) << endl;
      return 0;
    }
  }

  cout << "None" << endl;
  return 0;
}
