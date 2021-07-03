#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N, M, X;
  cin >> N >> M >> X;
  vector<int> A(M);
  vector<int> v(N + 1, 0);
  for (int i = 0; i < M; ++i)
  {
    cin >> A[i];
    v[A[i]] = 1;
  }

  int go_left = 0;
  int go_right = 0;

  for (int i = X; i >= 0; --i)
  {
    go_left += v[i];
  }
  for (int i = X; i <= N; ++i)
  {
    go_right += v[i];
  }

  cout << min(go_left, go_right) << endl;
  return 0;
}
