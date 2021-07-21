#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<long long> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }
  sort(A.begin(), A.end());

  vector<long long> B;
  for (int i = 0; i < N - 1;)
  {
    if (A[i] == A[i + 1])
    {
      B.push_back(A[i]);
      i += 2;
    }
    else
    {
      ++i;
    }
  }

  if (B.empty())
  {
    cout << 0 << endl;
  }
  else
  {
    sort(B.begin(), B.end(), greater<long long>{});
    cout << B[0] * B[1] << endl;
  }

  return 0;
}
