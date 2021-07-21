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
  sort(A.begin(), A.end(), greater<long long>{});

  int a = 1;
  int b = 1;
  bool height = false;
  long long h = 0;

  for (int i = 0; i < N - 1; ++i)
  {
    if (!height)
    {
      if (A[i] == A[i + 1])
      {
        ++a;
        if (a >= 4)
        {
          cout << A[i] * A[i] << endl;
          return 0;
        }
      }
      else
      {
        if (a >= 2)
        {
          height = true;
          h = A[i];
        }
        else
        {
          a = 1;
        }
      }
    }
    else 
    {
      if (A[i] == A[i + 1])
      {
        ++b;
        if (b >= 2)
        {
          cout << h * A[i] << endl;
          return 0;
        }
      }
    }
  }

  cout << 0 << endl;
  return 0;
}
