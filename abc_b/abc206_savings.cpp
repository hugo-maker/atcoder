#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
  long long N;
  cin >> N;
  vector<long long> A(100010);
  A[0] = 0;
  for (int i = 1; i < 100010; ++i)
  {
    A[i] = A[i - 1] + i;
  }

  int ans = lower_bound(A.begin(), A.end(), N) - A.begin();
  cout << ans << endl;
  return 0;
}
