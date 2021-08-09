#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  map<string, long long> m;
  string s;
  for (int i = 0; i < N; ++i)
  {
    cin >> s;
    sort(s.begin(), s.end());
    ++m[s];
  }

  long long ans = 0;
  for (auto iter = m.begin(); iter != m.end(); ++iter)
  {
    long long tmp = iter->second;
    ans += tmp * (tmp - 1) / 2;
  }

  cout << ans << endl;
  return 0;
}
