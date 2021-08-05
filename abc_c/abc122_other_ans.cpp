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

  vector<int> s(N + 1, 0);
  for (int i = 0; i < N; ++i)
  {
    if (i + 1 < N && S[i] == 'A' && S[i + 1] == 'C')
    {
      s[i + 1] = s[i] + 1;
    }
    else
    {
      s[i + 1] = s[i];
    }
  }

  for (int q = 0; q < Q; ++q)
  {
    int l, r;
    cin >> l >> r;
    --l, --r;
    cout << s[r] - s[l] << endl;
  }

  return 0;
}
