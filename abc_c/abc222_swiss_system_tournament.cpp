#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int rsp(char a, char b)
{
  if (a == 'G')
  {
    if (b == 'C')
    {
      return 1;
    }
    else if (b == 'G')
    {
      return 0;
    }
    else
    {
      return -1;
    }
  }
  else if (a == 'C')
  {
    if (b == 'C')
    {
      return 0;
    }
    else if (b == 'G')
    {
      return -1;
    }
    else
    {
      return 1;
    }
  }
  else if (a == 'P')
  {
    if (b == 'C')
    {
      return -1;
    }
    else if (b == 'G')
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
}

bool cmp(pair<int, int> a, pair<int, int> b)
{
  if (a.second != b.second)
  {
    return a.second > b.second;
  }
  else
  {
    return a.first < b.first;
  }
}

int main()
{
  int N, M;
  cin >> N >> M;
  vector<string> A(N * 2);
  for (int i = 0; i < 2 * N; ++i)
  {
    cin >> A[i];
  }

  vector<pair<int, int>> num_win;
  for (int i = 0; i < 2 * N; ++i)
  {
    num_win.push_back({i, 0});
  }

  for (int i = 0; i < M; ++i)
  {
    sort(num_win.begin(), num_win.end(), cmp);
    for (int k = 0; k < 2 * N - 1; k += 2)
    {
      char a = A[num_win[k].first][i];
      char b = A[num_win[k + 1].first][i];
      if (rsp(a, b) == 1)
      {
        ++num_win[k].second;
      }
      else if (rsp(a, b) == -1)
      {
        ++num_win[k + 1].second;
      }
    }
  }

  sort(num_win.begin(), num_win.end(), cmp);
  for (int i = 0; i < 2 * N; ++i)
  {
    cout << num_win[i].first + 1 << endl;
  }
  return 0;
}
