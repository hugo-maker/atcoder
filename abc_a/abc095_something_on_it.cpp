#include <iostream>
#include <string>
using namespace std;

int main()
{
  string S;
  cin >> S;

  int res = 700;
  for (int i = 0; i < 3; ++i)
  {
    if (S[i] == 'o')
    {
      res += 100;
    }
  }

  cout << res << endl;
  return 0;
}
