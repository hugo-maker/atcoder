#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N, P;
  cin >> N >> P;
  vector<int> a(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int ans = lower_bound(a.begin(), a.end(), P) - a.begin();
  cout << ans << endl;
  return 0;
}
