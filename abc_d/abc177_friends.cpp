#include <iostream>
#include <vector>
using namespace std;

struct UnionFind
{
  vector<int> par;

  UnionFind(int n) : par(n, -1) {}
  void init(int n) {par.assign(n, -1);}

  int root(int x)
  {
    if (par[x] < 0)
    {
      return x;
    }
    else
    {
      return par[x] = root(par[x]);
    }
  }

  bool issame(int x, int y)
  {
    return root(x) == root(y);
  }

  bool merge(int x, int y)
  {
    x = root(x);
    y = root(y);
    if (x == y)
    {
      return false;
    }
    if (par[x] > par[y])
    {
      swap(x, y);
    }
    par[x] += par[y];
    par[y] = x;
    return true;
  }

  int size(int x)
  {
    return -par[root(x)];
  }
};

int main()
{
  int N, M;
  cin >> N >> M;
  UnionFind uf(N);
  for (int i = 0; i < M; ++i)
  {
    int a, b;
    cin >> a >> b;
    --a, --b;
    uf.merge(a, b);
  }
  int ans = 0;
  for (int i = 0; i < N; ++i)
  {
    ans = max(ans, uf.size(i));
  }
  cout << ans << endl;
  return 0;
}
