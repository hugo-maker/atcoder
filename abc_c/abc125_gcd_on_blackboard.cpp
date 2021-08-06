#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }
  
  vector<int> left(N + 1, 0), right(N + 1, 0);
  for (int i = 0; i < N; ++i)
  {
    left[i + 1] = gcd(left[i], A[i]);
  }
  for (int i = N - 1; i >= 0; --i)
  {
    right[i] = gcd(right[i + 1], A[i]);
  }

  int ans = 0;
  for (int i = 0; i < N; ++i)
  {
    int l = left[i];
    int r = right[i + 1];

    ans = max(ans, gcd(l, r));
  }
  cout << ans << endl;
  return 0;
}
