#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }

  auto iter = max_element(A.begin(), A.end());
  int index = (int)distance(A.begin(), iter);

  vector<int> B = A;
  sort(B.begin(), B.end(), greater<int>{});

  for (int i = 0; i < N; ++i)
  {
    if (i == index)
    {
      cout << B[1] << endl;
    }
    else
    {
      cout << *iter << endl;
    }
  }

  return 0;
}
