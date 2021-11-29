#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  long long N, W;
  cin >> N >> W;
  vector<pair<long long, long long>> AB;
  for (int i = 0; i < N; ++i)
  {
    long long A, B;
    cin >> A >> B;
    AB.push_back({A, B});
  }
  sort(AB.begin(), AB.end(), greater<pair<long long, long long>>{});

  long long ans = 0;
  for (int i = 0; i < N; ++i)
  {
    ans += AB[i].first * min(W, AB[i].second);
    W -= AB[i].second;
    if (W <= 0)
    {
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
