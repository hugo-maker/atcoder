#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<class T>
void chmin(T & a, T b)
{
  if (a > b)
  {
    a = b;
  }
}

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> B(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i] >> B[i];
  }

  int m = 1e9;
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < N; ++j)
    {
      if (i == j)
      {
        chmin(m, A[i] + B[j]);
      }
      else
      {
        chmin(m, max(A[i], B[j]));
      }
    }
  }

  cout << m << endl;

  return 0;
}
