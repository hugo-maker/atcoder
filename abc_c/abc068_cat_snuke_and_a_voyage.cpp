#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int N, M;
set<pair<int, int>> s;

bool solve()
{
  for (int i = 1; i < N - 1; ++i)
  {
    if (s.count({0, i}) && s.count({i, N - 1}))
    {
      return true;
    }
  }

  return false;
}

int main()
{
  cin >> N >> M;

  int a, b;
  for (int i = 0; i < M; ++i)
  {
    cin >> a >> b;
    --a;
    --b;
    s.insert({a, b});
    s.insert({b, a});
  }

  if (solve())
  {
    cout << "POSSIBLE" << endl;
  }
  else
  {
    cout << "IMPOSSIBLE" << endl;
  }

  return 0;
}
