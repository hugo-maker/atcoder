#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int N = 200010;

int main()
{
  int n;
  int a, b;
  vector<pair<int, int>> x;
  int cnt;
  int ans[N];
  for (int i = 0; i < N; ++i)
  {
    ans[i] = 0;
  }
  cin >> n;
  for (int i = 0; i < n; ++i)
  {
    cin >> a >> b;
    x.push_back({a, 1});
    x.push_back({a + b, -1});
  }

  sort(x.begin(), x.end());

  cnt = 0;
  for (int i = 0; i < x.size() - 1; ++i)
  {
    cnt += x[i].second;
    ans[cnt] += ((x[i + 1].first) - (x[i].first));
  }
  for (int i = 0; i < n - 1; ++i)
  {
    cout << ans[i + 1] << " ";
  }
  cout << ans[n] << endl;
  return 0;
}
