#include <iostream>
#include <vector>
using namespace std;

const int MAX_A = 200;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }
  vector<int> d(MAX_A * 2 + 1);
  for (int i = 0; i < N; ++i)
  {
    ++d[MAX_A + A[i]];
  }

  long long ans = 0;
  for (int ai = -MAX_A; ai <= MAX_A; ++ai)
  {
    for (int aj = -MAX_A; aj <= ai; ++aj)
    {
      long long x = ai - aj;
      ans += x * x * d[MAX_A + ai] * d[MAX_A + aj];
    }
  }

  cout << ans << endl;
  return 0;
}
