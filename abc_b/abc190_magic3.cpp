#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, S, D;
  cin >> N >> S >> D;
  vector<pair<int, int>> xy(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> xy[i].first >> xy[i].second;
  }

  bool can = false;
  for (int i = 0; i < N; ++i)
  {
    if (xy[i].first < S && xy[i].second > D)
    {
      can = true;
      break;
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
