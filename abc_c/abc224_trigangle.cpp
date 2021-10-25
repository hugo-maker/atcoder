#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<pair<long long, long long>> XY(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> XY[i].first >> XY[i].second;
  }
  sort(XY.begin(), XY.end());

  int cnt = 0;
  for (int i = 0; i < N - 2; ++i)
  {
    for (int j = i + 1; j < N - 1; ++j)
    {
      for (int k = j + 1; k < N; ++k)
      {
        long long dx1 = XY[j].first - XY[i].first;
        long long dx2 = XY[k].first - XY[j].first;
        long long dy1 = XY[j].second - XY[i].second;
        long long dy2 = XY[k].second - XY[j].second;
        if (dx2 * dy1 != dx1 * dy2)
        {
          ++cnt;
        }
      }
    }
  }
  cout << cnt << endl;
  return 0;
}
