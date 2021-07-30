#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;

  vector<int> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }

  N -= K;
  int cnt = 1;
  if (N % (K - 1) == 0)
  {
    cnt += N / (K - 1);
  }
  else
  {
    cnt += N / (K - 1) + 1;
  }

  cout << cnt << endl;
  return 0;
}
