#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> L(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> L[i];
  }
  sort(L.begin(), L.end());

  long long ans = 0;
  for (int i = 0; i < N - 1; ++i)
  {
    for (int j = i + 1; j < N; ++j)
    {
      int k = lower_bound(L.begin(), L.end(), L[i] + L[j]) - L.begin();

      ans += max(k - (j + 1), 0);
    }
  }

  cout << ans << endl;
  return 0;
}
