#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<pair<long long, long long>> BA;
  for (int i = 0; i < N; ++i)
  {
    long long a, b;
    cin >> a >> b;
    BA.push_back({b, a});
  }

  sort(BA.begin(), BA.end());
  vector<long long> sum(N, 0);
  sum[0] = BA[0].second;
  for (int i = 1; i < N; ++i)
  {
    sum[i] = sum[i - 1] + BA[i].second;
  }

  for (int i = 0; i < N; ++i)
  {
    if (BA[i].first < sum[i])
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}
