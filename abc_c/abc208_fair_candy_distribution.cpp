#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<long long, long long> a, pair<long long, long long> b)
{
  if (a.second != b.second)
  {
    return a.second < b.second;
  }
  return a.first < b.first;
}

int main()
{
  long long N, K;
  cin >> N >> K;
  vector<pair<long long, long long>> a;
  for (int i = 0; i < N; ++i)
  {
    long long A;
    cin >> A;
    a.push_back({A, i});
  }

  sort(a.begin(), a.end());
  for (long long i = 0; i < K % N; ++i)
  {
    a[i].first = 1;
  }
  for (long long i = K % N; i < N; ++i)
  {
    a[i].first = 0;
  }

  sort(a.begin(), a.end(), cmp);
  for (int i = 0; i < N; ++i)
  {
    long long ans = K / N;
    if (a[i].first)
    {
      ++ans;
    }
    cout << ans << endl;
  }

  return 0;
}
