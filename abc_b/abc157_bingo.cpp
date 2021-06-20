#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<vector<pair<int, bool>>> A(3, vector<pair<int, bool>>(3, {0, false}));
  for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      cin >> A[i][j].first;
    }
  }

  int N;
  cin >> N;
  int b;
  for (int i = 0; i < N; ++i)
  {
    cin >> b;
    for (int i = 0; i < 3; ++i)
    {
      for (int j = 0; j < 3; ++j)
      {
        if (b == A[i][j].first)
        {
          A[i][j].second = true;
        }
      }
    }
  }

  if (A[0][0].second && A[0][1].second && A[0][2].second ||
      A[1][0].second && A[1][1].second && A[1][2].second ||
      A[2][0].second && A[2][1].second && A[2][2].second ||
      A[0][0].second && A[1][0].second && A[2][0].second ||
      A[0][1].second && A[1][1].second && A[2][1].second ||
      A[0][2].second && A[1][2].second && A[2][2].second ||
      A[0][0].second && A[1][1].second && A[2][2].second ||
      A[0][2].second && A[1][1].second && A[2][0].second
      )
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
