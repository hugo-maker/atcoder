#include <iostream>
#include <vector>
using namespace std;

const int MAX = 100005;

vector<int> solve(int x)
{
  vector<int> res;
  for (int i = 2; i * i <= x; ++i)
  {
    while (x % i == 0)
    {
      x /= i;
      res.push_back(i);
    }
  }
  if (x != 1)
  {
    res.push_back(x);
  }
  return res;
}

int main()
{
  int n, m;
  cin >> n >> m;
  vector<bool> fl(MAX, true);
  for (int i = 0; i < n; ++i)
  {
    int a;
    cin >> a;
    vector<int> v = solve(a);
    for (auto & nx : v)
    {
      if (fl[nx])
      {
        for (int j = nx; j < MAX; j += nx)
        {
          fl[j] = false;
        }
      }
    }
  }
  vector<int> ans;
  for (int i = 1; i <= m; ++i)
  {
    if (fl[i])
    {
      ans.push_back(i);
    }
  }
  cout << ans.size() << endl;
  for (auto & nx : ans)
  {
    cout << nx << endl;
  }
  return 0;
}
