#include <iostream>
#include <vector>
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

  int ans = 0;
  for (int l = 0; l < N; ++l)
  {
    int x = A[l];
    for (int r = l; r < N; ++r)
    {
      x = min(x, A[r]);
      ans = max(ans, x * (r - l + 1));
    }
  }

  cout << ans << endl;
  return 0;
}
