#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> v(3);
  for (int i = 0; i < 3; ++i)
  {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  int diff1 = v[2] - v[0];
  int diff2 = v[2] - v[1];

  int cnt = 0;
  if ((diff1 - diff2) % 2 == 0)
  {
    cnt += (diff1 - diff2) / 2;
    cnt += diff2;
  }
  else
  {
    ++cnt;
    ++diff2;
    cnt += (diff1 - diff2) / 2;
    cnt += diff2;
  }

  cout << cnt << endl;
  return 0;
}
