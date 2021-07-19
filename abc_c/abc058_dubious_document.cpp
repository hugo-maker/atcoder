#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<string> S(n);
  vector<vector<int>> v(n, vector<int>(26, 0));
  for (int i = 0; i < n; ++i)
  {
    cin >> S[i];
    for (int j = 0; j < S[i].size(); ++j)
    {
      ++v[i][S[i][j] - 'a'];
    }
  }

  for (int i = 0; i < 26; ++i)
  {
    int cnt = 1 << 29;
    for (int j = 0; j < n; ++j)
    {
      cnt = min(cnt, v[j][i]);
    }
    char c = 'a' + i;
    for (int k = 0; k < cnt; ++k)
    {
      cout << c;
    }
  }
  cout << endl;

  return 0;
}
