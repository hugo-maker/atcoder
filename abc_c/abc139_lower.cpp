#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> H(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> H[i];
  }

  int cnt = 0;
  int ans = 0;
  for (int i = 1; i < N; ++i)
  {
    if (H[i - 1] >= H[i])
    {
      ++cnt;
    }
    else
    {
      ans = max(ans, cnt);
      cnt = 0;
    }
  }

  ans = max(ans, cnt);
  cout << ans << endl;
  return 0;
}
