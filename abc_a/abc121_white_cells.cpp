#include <iostream>
using namespace std;

int main()
{
  int H, W, h, w;
  cin >> H >> W >> h >> w;

  cout << H * W - (h * W + w * (H - h)) << endl;

  return 0;
}
