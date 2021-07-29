#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<char> S(N);
  int cnt_e = 0;
  int cnt_w = 0;
  for (int i = 0; i < N; ++i)
  {
    cin >> S[i];
    if (S[i] == 'E')
    {
      ++cnt_e;
    }
    else
    {
      ++cnt_w;
    }
  }

  vector<int> left_w(N, 0);
  vector<int> right_e(N, 0);
  left_w[0] = 0;
  right_e[0] = cnt_e;
  if (S[0] == 'E')
  {
    --right_e[0];
  }

  int res = left_w[0] + right_e[0];
  for (int i = 1; i < N; ++i)
  {
    if (S[i - 1] == 'W')
    {
      left_w[i] = left_w[i - 1] + 1;
    }
    else
    {
      left_w[i] = left_w[i - 1];
    }

    if (S[i] == 'E')
    {
      right_e[i] = right_e[i - 1] - 1;
    }
    else
    {
      right_e[i] = right_e[i - 1];
    }

    res = min(res, left_w[i] + right_e[i]);
  }

  cout << res << endl;
  return 0;
}
