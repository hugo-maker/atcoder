#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  long long N, M;
  cin >> N >> M;
  vector<long long> A(M);
  for (int i = 0; i < M; ++i)
  {
    cin >> A[i];
  }
  sort(A.begin(), A.end());

  A.insert(A.begin(), 0);
  A.push_back(N + 1);

  vector<long long> v;
  long long K = N;
  for (int i = 0; i + 1 < A.size(); ++i)
  {
    long long len = A[i + 1] - A[i] - 1;
    if (len > 0)
    {
      v.push_back(len);
      K = min(K, len);
    }
  }

  long long ans = 0;
  for (auto len : v)
  {
    ans += (len + K - 1) / K;
  }
  cout << ans << endl;
  return 0;
}
