#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<string> S(N);
  string s;
  for (int i = 0; i < N; ++i)
  {
    cin >> s;
    reverse(s.begin(), s.end());
    S[i] = s;
  }
  sort(S.begin(), S.end());

  for (int i = 0; i < N - 1; ++i)
  {
    bool one = true;
    bool two = false;
    for (int j = 0; j < (int)S[i].size(); ++j)
    {
      if (S[i][j] != S[i + 1][j])
      {
        one = false;
      }
    }
    if (S[i].size() == S[i + 1].size() - 1)
    {
      if (S[i + 1][S[i + 1].size() - 1] == '!')
      {
        two = true;
      }
    }

    if (one && two)
    {
      string ans = S[i];
      reverse(ans.begin(), ans.end());
      cout << ans << endl;
      return 0;
    }
  }

  cout << "satisfiable" << endl;
  return 0;
}
