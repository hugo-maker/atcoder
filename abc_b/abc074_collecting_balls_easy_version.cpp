#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> x(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> x[i];
  }

  int res = 0;
  for (int i = 0; i < N; ++i)
  {
    res += 2 * min(x[i], abs(K - x[i]));
  }

  cout << res << endl;
  return 0;
}
