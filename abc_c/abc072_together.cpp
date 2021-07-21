#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<long long> b;
  long long a;
  for (int i = 0; i < N; ++i)
  {
    cin >> a;
    b.push_back(a - 1);
    b.push_back(a);
    b.push_back(a + 1);
  }
  sort(b.begin(), b.end());

  int cnt = 1;
  int res = 0;
  for (int i = 0; i < 3 * N - 1; ++i)
  {
    if (b[i] == b[i + 1])
    {
      ++cnt;
    }
    else
    {
      res = max(res, cnt);
      cnt = 1;
    }
  }

  cout << res << endl;
  return 0;
}
