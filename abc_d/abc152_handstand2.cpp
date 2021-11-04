#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  int N;
  cin >> N;
  long long ans = 0;
  vector<vector<long long>> num(10, vector<long long>(10, 0));
  for (int n = 1; n <= N; ++n)
  {
    vector<int> d;
    int nn = n;
    while (nn)
    {
      d.push_back(nn % 10);
      nn /= 10;
    }
    int a = d[0];
    int b = d.back();
    if (!a || !b)
    {
      continue;
    }
    ++num[a][b];
  }
  for (int a = 1; a < 10; ++a)
  {
    for (int b = 1; b < 10; ++b)
    {
      ans += num[a][b] * num[b][a];
    }
  }

  cout << ans << endl;
  return 0;
}
