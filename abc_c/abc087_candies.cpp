#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> B(N);
  
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }
  for (int i = 0; i < N; ++i)
  {
    cin >> B[i];
  }

  vector<int> dp_A(N);
  dp_A[0] = A[0];
  for (int i = 1; i < N; ++i)
  {
    dp_A[i] = dp_A[i - 1] + A[i];
  }

  vector<int> dp_B(N);
  dp_B[N - 1] = B[N - 1];
  for (int i = N - 2; i >= 0; --i)
  {
    dp_B[i] = dp_B[i + 1] + B[i];
  }

  int res = 0;
  for (int i = 0; i < N; ++i)
  {
    res = max(res, dp_A[i] + dp_B[i]);
  }

  cout << res << endl;
  return 0;
}
