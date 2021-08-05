#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N, Q;
  string S;
  cin >> N >> Q >> S;
  vector<size_t> l(Q);
  vector<size_t> r(Q);
  for (int i = 0; i < Q; ++i)
  {
    cin >> l[i] >> r[i];
    --l[i];
    --r[i];
  }

  vector<size_t> P;
  vector<int> dp(N, 0);
  size_t pos = S.find("AC", 0);
  while (pos != string::npos)
  {
    P.push_back(pos);
    for (int i = (int)pos + 1; i < N; ++i)
    {
      ++dp[i];
    }
    pos = S.find("AC", pos + 2);
  }

  for (int i = 0; i < Q; ++i)
  {
    cout << dp[r[i]] - dp[l[i]] << endl;
  }

  return 0;
}
