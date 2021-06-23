#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string S;
  cin >> S;

  string T;
  if (S.size() % 2 == 0)
  {
    T = S.substr(S.size() / 2);
    reverse(T.begin(), T.end());
    S.erase(S.size() / 2, S.size() / 2);
  }
  else
  {
    T = S.substr(S.size() / 2);
    reverse(T.begin(), T.end());
    S.erase(S.size() / 2 + 1, S.size() / 2);
  }

  int count = 0;
  for (size_t i = 0; i < S.size(); ++i)
  {
    if (S[i] == T[i])
    {
      continue;
    }
    else
    {
      ++count;
    }
  }

  cout << count << endl;

  return 0;
}
