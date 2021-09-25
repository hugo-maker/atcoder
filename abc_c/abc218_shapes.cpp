#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> trim(vector<string> X)
{
  int N = (int)X.size();
  int min_r = 1 << 29;
  int max_r = 0;
  int min_c = 1 << 29;
  int max_c = 0;
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < N; ++j)
    {
      if (X[i][j] == '#')
      {
        min_r = min(min_r, i);
        max_r = max(max_r, i);
        min_c = min(min_c, j);
        max_c = max(max_c, j);
      }
    }
  }
  vector<string> trimed_X;
  for (int i = min_r; i <= max_r; ++i)
  {
    trimed_X.push_back(X[i].substr(min_c, max_c - min_c + 1));
  }

  return trimed_X;
}

vector<string> my_rotate(vector<string> X)
{
  int H = (int)X.size();
  int W = (int)X[0].size();

  vector<string> x(W);
  for (int i = 0; i < W; ++i)
  {
    for (int j = H - 1; j >= 0; --j)
    {
      x[i].push_back(X[j][i]);
    }
  }

  return x;
}

bool my_is_same(vector<string> S, vector<string> T)
{
  if (S.size() == T.size() && S[0].size() == T[0].size())
  {
    bool ok = true;
    for (int i = 0; i < (int)S.size(); ++i)
    {
      for (int j = 0; j < S[0].size(); ++j)
      {
        if (S[i][j] != T[i][j])
        {
          ok = false;
        }
      }
    }
    return ok;
  }
  return false;
}

int main()
{
  int N;
  cin >> N;
  if (N == 1)
  {
    cout << "Yes" << endl;
    return 0;
  }

  vector<string> S(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> S[i];
  }
  vector<string> T(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> T[i];
  }

  auto s = trim(S);
  auto t = trim(T);
  bool ok = false;
  if ((s.size() == t.size() && s[0].size() == t[0].size()) ||
      (s.size() == t[0].size() && s[0].size() == t.size()))
  {
    for (int i = 0; i < 4; ++i)
    {
      t = my_rotate(t);
      if (my_is_same(s, t))
      {
        ok = true;
      }
    }
  }

  if (ok)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
