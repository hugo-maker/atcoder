#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(M);
  for (int i = 0; i < M; ++i)
  {
    cin >> A[i];
  }

  for (int i = 0; i < M; ++i)
  {
    N -= A[i];
  }

  if (N < 0)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << N << endl;
  }

  return 0;
}
