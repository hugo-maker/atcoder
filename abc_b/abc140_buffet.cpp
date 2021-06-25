#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> B(N);
  vector<int> C(N - 1);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }
  for (int i = 0; i < N; ++i)
  {
    cin >> B[i];
  }
  for (int i = 0; i < N - 1; ++i)
  {
    cin >> C[i];
  }

  int sum = 0;
  int prev = 1 << 29;
  for (int i = 0; i < N; ++i)
  {
    sum += B[A[i] - 1];
    if (A[i] >= 2 && prev == A[i] - 2)
    {
      sum += C[A[i] - 2];
    }
    prev = A[i] - 1;
  }

  cout << sum << endl;

  return 0;
}
