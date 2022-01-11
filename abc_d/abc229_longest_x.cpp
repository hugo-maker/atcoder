#include <iostream>
#include <vector>
using namespace std;

int main()
{
  string s;
  cin >> s;
  long long k;
  cin >> k;
  long long n = s.size();

  vector<long long> cnt(n + 1);
  for (long long i = 0; i < n; ++i)
  {
    if (s[i] == '.')
    {
      cnt[i + 1] = cnt[i] + 1;
    }
    else
    {
      cnt[i + 1] = cnt[i];
    }
  }

  long long ans = 0;
  long long r = 0;
  for (long long l = 0; l < n; ++l)
  {
    while (r < n && cnt[r + 1] - cnt[l] <= k)
    {
      ++r;
    }
    ans = max(ans, r - l);
  }
  cout << ans << endl;
  return 0;
}
