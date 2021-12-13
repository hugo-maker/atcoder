#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N, Q;
  cin >> N >> Q;
  vector<int> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }
  sort(A.begin(), A.end());
  for (int i = 0; i < Q; ++i)
  {
    int x;
    cin >> x;
    auto iter = lower_bound(A.begin(), A.end(), x);
    cout << A.end() - iter << endl;
  }
  return 0;
}
