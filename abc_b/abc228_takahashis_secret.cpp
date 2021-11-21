#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, X;
  cin >> N >> X;
  --X;
  vector<int> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
    --A[i];
  }
  vector<bool> knew(N, false);

  int cur = X;
  int ans = 0;
  for (int i = 0; i < N; ++i)
  {
    if (knew[cur])
    {
      break;
    }
    else
    {
      knew[cur] = true;
      ++ans;
      cur = A[cur];
    }
  }

  cout << ans << endl;
  return 0;
}
