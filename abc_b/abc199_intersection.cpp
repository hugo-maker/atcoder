#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N + 1);
  vector<int> B(N + 1);
  for (int i = 1; i <= N; ++i)
  {
    cin >> A[i];
  }
  for (int i = 1; i <= N; ++i)
  {
    cin >> B[i];
  }

  int x;
  int min = *min_element(A.begin(), A.end());
  int max = *max_element(B.begin(), B.end());

  int count = 0;
  for (x = min; x <= max; ++x)
  {
    bool ok = true;
    for (int i = 1; i <= N; ++i)
    {
      if (x < A[i] || x > B[i])
      {
        ok = false;
      }
    }
    if (ok)
    {
      ++count;
    }
  }

  cout << count << endl;

  return 0;
}
