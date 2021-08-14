#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  long long K;
  cin >> K >> N;
  vector<long long> A(N);

  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }
  vector<long long> e(N);
  for (int i = 0; i < N - 1; ++i)
  {
    e[i] = A[i + 1] - A[i];
  }

  e[N - 1] = K - A[N - 1] + A[0];
  long long v = e[0];
  for (int i = 0; i < N; ++i)
  {
    v = max(e[i], v);
  }

  cout << K - v << endl;
  return 0;
}
