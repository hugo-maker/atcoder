#include <iostream>
#include <vector>
using namespace std;

struct UnionFind
{
  vector<int> par;

  UnionFind(){}
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

const int MAX = 210000;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }

  UnionFind uf(MAX);
  for (int i = 0, j = N - 1; i < j; ++i, --j)
  {
    uf.merge(A[i], A[j]);
  }
  long long ans = 0;
  for (int v = 0; v < MAX; ++v)
  {
    if (uf.root(v) == v)
    {
      ans += uf.size(v) - 1;
    }
  }
  cout << ans << endl;
  return 0;
}
