#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int INF = 1 << 29;

int main()
{
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H);

  int m = INF;
  int temp = 0;
  for (int i = 0; i < H; ++i)
  {
    for (int j = 0; j < W; ++j)
    {
      cin >> temp;
      if (temp < m)
      {
        m = temp;
      }
      A[i].push_back(temp);
    }
  }

  int count = 0;
  for (int i = 0; i < H; ++i)
  {
    for (int j = 0; j < W; ++j)
    {
      count += A[i][j] - m;
    }
  }

  cout << count << endl;

  return 0;
}
