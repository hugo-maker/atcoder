#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> a;
  int temp;
  for (int i = 0; i < N; ++i)
  {
    cin >> temp;
    --temp;
    a.push_back(temp);
  }

  int cnt = 0;
  int on = 0;
  while (true)
  {
    if (on == 1)
    {
      cout << cnt << endl;
      return 0;
    }

    if (cnt >= N)
    {
      cout << -1 << endl;
      return 0;
    }
    // push
    on = a[on];
    ++cnt;
  }
}
