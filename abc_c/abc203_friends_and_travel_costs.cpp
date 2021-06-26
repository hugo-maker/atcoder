#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  long long N, K;
  cin >> N >> K;
  vector<pair<long long, long long>> a(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> a[i].first >> a[i].second;
  }

  sort(a.begin(), a.end());
  for (int i = 0; i < N; ++i)
  {
    if (a[i].first > K)
    {
      break;
    }
    K += a[i].second;
  }

  cout << K << endl;

  return 0;
}
