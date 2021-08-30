#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
  int K, N;
  cin >> N >> K;
  vector<int> c(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> c[i];
  }

  map<int, int> m;
  for (int i = 0; i < K; ++i)
  {
    if (m.count(c[i]))
    {
      ++m[c[i]];
    }
    else
    {
      m.insert({c[i], 1});
    }
  }

  int ans = m.size();
  for (int i = K; i < N; ++i)
  {
    if (m.count(c[i]))
    {
      ++m[c[i]];
    }
    else
    {
      m.insert({c[i], 1});
    }

    --m[c[i - K]];
    if (m[c[i - K]] == 0)
    {
      m.erase(c[i - K]);
    }

    ans = max(ans, (int)m.size());
  }

  cout << ans << endl;
  return 0;
}
