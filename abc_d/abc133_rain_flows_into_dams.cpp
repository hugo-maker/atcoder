#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<long long> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
    A[i] *= 2;
  }

  long long offset = 0;
  for (int i = 0; i < N; ++i)
  {
    offset = A[i] - offset;
  }
  long long x = offset / 2;

  long long cur = x;
  for (int i = 0; i < N; ++i)
  {
    cout << cur << " ";
    cur = A[i] - cur;
  }
  cout << endl;
  return 0;
}
