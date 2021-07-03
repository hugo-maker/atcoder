#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N, M;
  cin >> N;

  vector<string> s(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> s[i];
  }
  cin >> M;
  vector<string> t(M);
  for (int i = 0; i < M; ++i)
  {
    cin >> t[i];
  }

  int res = -1000;
  for (int i = 0; i < N; ++i)
  {
    int cnt = count(s.begin(), s.end(), s[i]) - count(t.begin(), t.end(), s[i]);
    res = max(res, cnt);
  }

  if (res < 0)
  {
    cout << 0 << endl;
  }
  else
  {
    cout << res << endl;
  }

  return 0;
}
