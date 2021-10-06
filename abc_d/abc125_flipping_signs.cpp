#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<long long> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }

  int num_minus = 0;
  long long mi = 1LL << 60;
  long long ans = 0;
  for (int i = 0; i < N; ++i)
  {
    if (A[i] < 0)
    {
      ++num_minus;
    }
    mi = min(mi, abs(A[i]));
    ans += abs(A[i]);
  }

  if (num_minus % 2 == 0)
  {
    cout << ans << endl;
  }
  else
  {
    cout << ans - mi * 2 << endl;
  }
  return 0;
}
