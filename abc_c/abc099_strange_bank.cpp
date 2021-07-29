#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 110000;

vector<int> memo(MAX_N, -1);

int rec(int n)
{
  if (n == 0)
  {
    return 0;
  }
  if (memo[n] != -1)
  {
    return memo[n];
  }

  int res = n;

  for (int i = 1; i <= n; i *= 6)
  {
    res = min(res, rec(n - i) + 1);
  }

  for (int i = 1; i <= n; i *= 9)
  {
    res = min(res, rec(n - i) + 1);
  }

  return memo[n] = res;
}

int main()
{
  int N;
  cin >> N;

  cout << rec(N) << endl;
  return 0;
}
