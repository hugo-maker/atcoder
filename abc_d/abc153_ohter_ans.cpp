#include <iostream>
using namespace std;

long long rec(long long N)
{
  if (N == 1)
  {
    return 1;
  }
  return rec(N / 2) * 2 + 1;
}

int main()
{
  long long H;
  cin >> H;
  cout << rec(H) << endl;
  return 0;
}
