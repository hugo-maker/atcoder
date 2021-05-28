#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<vector<int>> switches(M);
  for (int i = 0; i < M; ++i)
  {
    int k;
    cin >> k;
    for (int j = 0; j < k; ++j)
    {
      int temp;
      cin >> temp;
      --temp;
      switches[i].push_back(temp);
    }
  }

  vector<int> p(M);
  for (int i = 0; i < M; ++i)
  {
    cin >> p[i];
  }

  long long result = 0;
  for (int bit = 0; bit < (1 << N); ++bit)
  {
    bool ok = true;
    for (int i = 0; i < M; ++i)
    {
      int con = 0;
      for (auto v : switches[i])
      {
        if (bit & (1 << v))
        {
          ++con;
        }
      }
      if (con % 2 != p[i])
      {
        ok = false;
      }
    }
    if (ok)
    {
      ++result;
    }
  }

  cout << result << endl;

  return 0;
}
