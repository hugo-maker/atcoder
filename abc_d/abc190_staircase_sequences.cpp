#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long long N;
  cin >> N;
  while (N % 2 == 0)
  {
    N /= 2;
  }
  long long sq = sqrt(N), ans = 0;
  for (long long i = 1; i <= sq; ++i)
  {
    if (N % i == 0)
    {
      ans += 2;
    }
  }
  if (sq * sq == N)
  {
    --ans;
  }
  cout << ans * 2 << endl;
}
