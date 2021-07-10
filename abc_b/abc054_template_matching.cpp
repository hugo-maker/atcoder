#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<string> A(N);
  vector<string> B(M);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }
  for (int i = 0; i < M; ++i)
  {
    cin >> B[i];
  }

  bool exist = false;

  for (int ly = 0; ly < N; ++ly)
  {
    for (int lx = 0; lx < N; ++lx)
    {
      if (ly + M - 1 >= N || lx + M - 1 >= N)
      {
        continue;
      }

      bool match = true;
      for (int y = 0; y < M; ++y)
      {
        for (int x = 0; x < M; ++x)
        {
          if (A[ly + y][lx + x] != B[y][x])
          {
            match = false;
          }
        }
      }
      if (match)
      {
        exist = true;
      }
    }
  }

  if (exist)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
