#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string S, T;
  cin >> S >> T;

  for (int i = 1; i <= S.size(); ++i)
  {
    if (S == T)
    {
      cout << "Yes" << endl;
      return 0;
    }
    rotate(S.begin(), S.end() - 1, S.end());
  }

  cout << "No" << endl;
  return 0;
}
