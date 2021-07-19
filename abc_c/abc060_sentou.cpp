#include <iostream>
#include <vector>
using namespace std;

int main()
{
  long long N, T;
  cin >> N >> T;
  vector<long long> t(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> t[i];
  }

  long long res = T;
  for (int i = 1; i < N; ++i)
  {
    if (t[i] - t[i - 1] < T)
    {
      res += t[i] - t[i - 1];
    }
    else
    {
      res += T;
    }
  }

  cout << res << endl;
  return 0;
}
