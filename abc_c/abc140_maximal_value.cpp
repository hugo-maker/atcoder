#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> B(N, 100000);
  for (int i = 0; i < N - 1; ++i)
  {
    cin >> B[i];
  }

  vector<int> A(N);
  A[0] = B[0];
  for (int i = 1; i < N; ++i)
  {
    A[i] = min(B[i - 1], B[i]);
  }

  int ans = 0;
  for (int i = 0; i < N; ++i)
  {
    ans += A[i];
  }

  cout << ans << endl;
  return 0;
}
