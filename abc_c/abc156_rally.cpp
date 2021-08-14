#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> X(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> X[i];
  }

  int ans = 1 << 29;
  for (int p = 0; p <= 100; ++p)
  {
    int tmp = 0;
    for (int i = 0; i < N; ++i)
    {
      tmp += (X[i] - p) * (X[i] - p);
    }
    ans = min(ans, tmp);
  }

  cout << ans << endl;
  return 0;
}
