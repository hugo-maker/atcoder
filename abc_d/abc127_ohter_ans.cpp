#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
using pll = pair<long long, long long>;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<pll> v;
  for (int i = 0; i < N; ++i)
  {
    int a;
    cin >> a;
    v.push_back({a, 1});
  }
  for (int i = 0; i < M; ++i)
  {
    int b, c;
    cin >> b >> c;
    v.push_back({c, b});
  }
  sort(v.begin(), v.end(), greater<pll>{});

  long long num = 0;
  long long ans = 0;
  for (auto p : v)
  {
    if (num + p.second <= N)
    {
      ans += p.first * p.second;
      num += p.second;
    }
    else
    {
      ans += p.first * (N - num);
      num = N;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
