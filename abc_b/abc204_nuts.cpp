#include <iostream>
#include <vector>
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
  sort(A.begin(), A.end());
  int ans = 0;
  for (auto iter = lower_bound(A.begin(), A.end(), 10); iter != A.end(); ++iter)
  {
    ans += *iter - 10;
  }

  cout << ans << endl;
  return 0;
}
