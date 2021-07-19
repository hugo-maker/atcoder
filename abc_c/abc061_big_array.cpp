#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  long long N, K;
  cin >> N >> K;
  vector<pair<long long, long long>> v(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> v[i].first >> v[i].second;
  }

  sort(v.begin(), v.end());

  long long cnt = 0;
  for (int i = 0; i < N; ++i)
  {
    cnt += v[i].second;
    if (cnt >= K)
    {
      cout << v[i].first << endl;
      return 0;
    }
  }
}
