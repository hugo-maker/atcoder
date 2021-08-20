#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<pair<double, double>> xy(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> xy[i].first >> xy[i].second;
  }
  sort(xy.begin(), xy.end());

  bool can = false;
  for (int i = 0; i < N - 2; ++i)
  {
    for (int j = i + 1; j < N - 1; ++j)
    {
      for (int k = j + 1; k < N; ++k)
      {
        double x_i = xy[i].first;
        double x_j = xy[j].first;
        double x_k = xy[k].first;
        double y_i = xy[i].second;
        double y_j = xy[j].second;
        double y_k = xy[k].second;

        if (x_i == x_j && x_j == x_k || y_i == y_j && y_j == y_k)
        {
          can = true;
        }
        else if (x_k != x_j && x_j != x_i)
        {
          if ((y_k - y_j) / (x_k - x_j) == (y_j - y_i) / (x_j - x_i))
          {
            can = true;
          }
        }
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
