#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  long long N, A, B, C, D, E;
  cin >> N >> A >> B >> C >> D >> E;

  long long tmp = min({A, B, C, D, E});
  long long ans = N / tmp;
  if (N % tmp == 0)
  {
    ans += 4;
  }
  else
  {
    ans += 5;
  }

  cout << ans << endl;
  return 0;
}
