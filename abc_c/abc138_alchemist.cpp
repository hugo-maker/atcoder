#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
  cout << setprecision(10);
  int N;
  cin >> N;
  vector<long double> v(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> v[i];
  }

  sort(v.begin(), v.end());
  long double ans = (v[0] + v[1]) / 2;
  for (int i = 2; i < N; ++i)
  {
    ans += v[i];
    ans /= 2;
  }

  cout << ans << endl;
  return 0;
}
