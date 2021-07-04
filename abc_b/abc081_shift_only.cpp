#include <iostream>
#include <vector>
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

  bool ok = true;
  int cnt = 0;
  while (ok)
  {
    for (int i = 0; i < N; ++i)
    {
      if (A[i] % 2 == 0)
      {
        A[i] /= 2;
      }
      else
      {
        ok = false;
        break;
      }
    }
    if (ok)
    {
      ++cnt;
    }
  }

  cout << cnt << endl;
  return 0;
}
