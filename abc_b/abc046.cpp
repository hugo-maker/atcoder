#include <iostream>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;

  long long res = K;
  for (int i = 1; i <= N - 1; ++i)
  {
    res *= K - 1;
  }

  cout << res << endl;
}
