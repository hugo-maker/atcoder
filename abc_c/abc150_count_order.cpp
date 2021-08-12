#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; ++i)
  {
    A[i] = i + 1;
  }

  vector<int> P(N);
  vector<int> Q(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> P[i];
  }
  for (int i = 0; i < N; ++i)
  {
    cin >> Q[i];
  }

  int cnt = 1;
  int a = 0;
  int b = 0;
  do
  {
    if (A == P)
    {
      a = cnt;
    }
    if (A == Q)
    {
      b = cnt;
    }
    ++cnt;
  } while (next_permutation(A.begin(), A.end()));

  cout << abs(a - b) << endl;
  return 0;
}
