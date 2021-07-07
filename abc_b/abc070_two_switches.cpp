#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  vector<bool> alice(101, false);
  vector<bool> bob(101, false);
  for (int i = A + 1; i <= B; ++i)
  {
    alice[i] = true;
  }
  for (int i = C + 1; i <= D; ++i)
  {
    bob[i] = true;
  }

  int cnt = 0;
  for (int i = 0; i <= 100; ++i)
  {
    if (alice[i] && bob[i])
    {
      ++cnt;
    }
  }

  cout << cnt << endl;
  return 0;
}
