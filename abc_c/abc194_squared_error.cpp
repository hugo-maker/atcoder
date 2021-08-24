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

  long long ans = 0;
  for (int i = 0; i < N; ++i)
  {
    for (int aj = -MAX_A; aj <= MAX_A; ++aj)
    {
      int c = d[MAX_A + aj];
      int x = A[i] - aj;
      ans += (long long)x * x * c;
    }
    ++d[MAX_A + A[i]];
  }

  cout << ans << endl;
  return 0;
}
