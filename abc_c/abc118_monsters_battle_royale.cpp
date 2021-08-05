#include <iostream>
#include <vector>
#include <numeric>
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

  long long ans = accumulate(A.begin(), A.end(), 0,
      [](long long m, long long n){return gcd(m, n);});

  cout << ans << endl;
  return 0;
}
