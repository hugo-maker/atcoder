#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  cout << setprecision(20);
  long double N, K;
  cin >> N >> K;

  long double ans = 0.0;
  for (long double i = 1; i <= N; ++i)
  {
    long double cnt = 0.0;
    long double num = i; 
    while (num < K)
    {
      num *= 2;
      ++cnt;
    }

    long double tmp = 1.0;
    tmp /= pow(2.0, cnt);
    ans += tmp;
  }

  ans /= N;
  cout << ans << endl;
}
