#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  int W, H, N;
  cin >> W >> H >> N;
  vector<int> x(N);
  vector<int> y(N);
  vector<int> a(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> x[i] >> y[i] >> a[i];
  }

  int left = 0;
  int right = W;
  int down = 0;
  int up = H;
  for (int i = 0; i < N; ++i)
  {
    if (a[i] == 1)
    {
      left = max(left, x[i]);
    }
    else if (a[i] == 2)
    {
      right = min(right, x[i]);
    }
    else if (a[i] == 3)
    {
      down = max(down, y[i]);
    }
    else
    {
      up = min(up, y[i]);
    }
  }

  cout << max(0, right - left) * max(0, up - down) << endl;
  return 0;
}
