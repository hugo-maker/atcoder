#include <iostream>
using namespace std;

int main()
{
  int N, K, X, Y;
  cin >> N >> K >> X >> Y;

  if (N > K)
  {
    cout << X * K + Y * (N - K) << endl;
  }
  else
  {
    cout << X * N << endl;
  }
  return 0;
}
