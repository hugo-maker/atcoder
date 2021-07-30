#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<long long> A(N), B(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
    B[i] = A[i] - i;
  }

  sort(B.begin(), B.end());
  long long x = B[N / 2];

  long long res = 0;
  for (int i = 0; i < N; ++i)
  {
    res += abs(x - B[i]);
  }
  cout << res << endl;
  return 0;
}
