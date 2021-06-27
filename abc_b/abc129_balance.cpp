#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> W(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> W[i];
  }

  vector<int> S(N);
  S[0] = W[0];
  for (int i = 1; i < N; ++i)
  {
    S[i] = S[i - 1] + W[i];
  }

  int res = 1 << 29;
  for (int i = N - 2; i >= 0; --i)
  {
    int temp = abs((S[N - 1] - S[i]) - S[i]);
    res = min(res, temp);
  }

  cout << res << endl;

  return 0;
}
