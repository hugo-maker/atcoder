#include <iostream>
#include <vector>
using namespace std;

using pint = pair<int, int>;
int N;
vector<vector<pint>> v;

bool judge(int bit)
{
  for (int i = 0; i < N; ++i)
  {
    if (!(bit & (1 << i)))
    {
      continue;
    }

    for (pint xy : v[i])
    {
      int x = xy.first;
      int y = xy.second;

      if (y == 1 && !(bit & (1 << x)))
      {
        return false;
      }
      if (y == 0 && (bit & (1 << x)))
      {
        return false;
      }
    }
  }

  return true;
}

int main()
{
  cin >> N;
  v.resize(N);
  int A;
  for (int i = 0; i < N; ++i)
  {
    cin >> A;
    v[i].resize(A);
    for (int j = 0; j < A; ++j)
    {
      cin >> v[i][j].first >> v[i][j].second;
      --v[i][j].first;
    }
  }

  int ans = 0;
  for (int bit = 0; bit < (1 << N); ++bit)
  {
    if (judge(bit))
    {
      int cnt = 0;
      for (int i = 0; i < N; ++i)
      {
        if (bit & (1 << i))
        {
          ++cnt;
        }
      }
      ans = max(ans, cnt);
    }
  }

  cout << ans << endl;
  return 0;
}
