#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
  string S;
  cin >> S;

  reverse(S.begin(), S.end());

  for (int i = 0; i < S.size(); ++i)
  {
    if (S[i] == '6')
    {
      S[i] = '9';
    }
    else if (S[i] == '9')
    {
      S[i] = '6';
    }
  }

  cout << S << endl;
  return 0;
}
