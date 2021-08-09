#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long comb(long long n, long long k)
{
  long long r = 1;
  for (long long d = 1; d <= k; ++d)
  {
    r *= n--;
    r /= d;
  }

  return r;
}

int main()
{
  int N;
  cin >> N;
  vector<string> s;
  string tmp;
  for (int i = 0; i < N; ++i)
  {
    cin >> tmp;
    sort(tmp.begin(), tmp.end());
    s.push_back(tmp);
  }
  sort(s.begin(), s.end());

  long long cnt = 0;
  long long ans = 0;
  for (int i = 1; i < N; ++i)
  {
    if (s[i - 1] == s[i])
    {
      if (cnt == 0)
      {
        ++cnt;
      }
      ++cnt;
    }
    else
    {
      if (cnt != 0)
      {
        ans += comb(cnt, 2);
        cnt = 0;
      }
    }
  }

  if (cnt != 0)
  {
    ans += comb(cnt, 2);
  }

  cout << ans << endl;
  return 0;
}
