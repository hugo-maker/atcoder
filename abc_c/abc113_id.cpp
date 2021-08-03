#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  vector<int> P(M), Y(M);
  for (int i = 0; i < M; ++i)
  {
    cin >> P[i] >> Y[i];
    --P[i];
  }

  vector<vector<int>> vals(N);
  for (int i = 0; i < M; ++i)
  {
    vals[P[i]].push_back(Y[i]);
  }

  for (int v = 0; v < N; ++v)
  {
    sort(vals[v].begin(), vals[v].end());
  }

  for (int i = 0; i < M; ++i)
  {
    int v = P[i];
    printf("%06d", v + 1);

    int id = lower_bound(vals[v].begin(), vals[v].end(), Y[i]) - vals[v].begin();
    printf("%06d\n", id + 1);
  }

  return 0;
}
