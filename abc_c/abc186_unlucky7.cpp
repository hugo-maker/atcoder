#include <iostream>
#include <cmath>
#include <set>
using namespace std;

set<int> s;
void solve(int n, int a)
{
  int tmp = n;
  while (tmp)
  {
    if (tmp % a == 7)
    {
      s.insert(n);
    }
    tmp /= a;
  }
}

int main()
{
  int N;
  cin >> N;
  for (int i = 1; i <= N; ++i)
  {
    solve(i, 10);
  }
  for (int i = 1; i <= N; ++i)
  {
    solve(i, 8);
  }
  cout << N - (int)s.size() << endl;
  return 0;
}
