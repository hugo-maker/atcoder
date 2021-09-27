#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  long long X;
  cin >> N;
  vector<long long> A(N);
  long long sum = 0;
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
    sum += A[i];
  }
  cin >> X;

  long long ans = X / sum * N;
  X %= sum;
  for (int i = 0; i < N; ++i)
  {
    X -= A[i];
    ++ans;
    if (X < 0)
    {
      break;
    }
  }
  cout << ans << endl;

  return 0;
}
