#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> B(N);
  vector<int> C(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }
  for (int i = 0; i < N; ++i)
  {
    cin >> B[i];
  }
  for (int i = 0; i < N; ++i)
  {
    cin >> C[i];
  }
  sort(A.begin(), A.end());
  sort(C.begin(), C.end());

  long long res = 0;

  for (int i = 0; i < N; ++i)
  {
    auto iter = lower_bound(A.begin(), A.end(), B[i]);
    size_t a = distance(A.begin(), iter);
    iter = upper_bound(C.begin(), C.end(), B[i]);
    size_t c = distance(iter, C.end());
    res += a * c;
  }

  cout << res << endl;
  return 0;
}
