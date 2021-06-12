#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, M, T;
  cin >> N >> M >> T;

  vector<int> A(M);
  vector<int> B(M);
  for (int i = 0; i < M; ++i)
  {
    cin >> A[i] >> B[i];
  }
  
  bool can = true;
  int max_battery = N;
  for (int i = 0; i < M; ++i)
  {
    if (i > 0)
    {
      N -= A[i] - B[i - 1];
    }
    else
    {
      N -= A[i];
    }

    if (N <= 0)
    {
      can = false;
      break;
    }

    N += B[i] - A[i];
    if (N > max_battery)
    {
      N = max_battery;
    }

    if (i == M - 1 && T - B[i] > 0)
    {
      N -= T - B[i];
      if (N <= 0)
      {
        can = false;
        break;
      }
    }
  }

  if (can)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
