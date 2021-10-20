#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
  cout << fixed << setprecision(20);
  int N;
  cin >> N;
  vector<double> A(N);
  vector<double> B(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i] >> B[i];
  }
  double t = 0, ans = 0;
  for (int i = 0; i < N; ++i)
  {
    t += A[i] / B[i];
  }
  t /= 2;
  for (int i = 0; i < N; ++i)
  {
    ans += min(A[i], t * B[i]);
    t -= min(A[i] / B[i], t);
  }
  cout << ans << endl;
  return 0;
}
