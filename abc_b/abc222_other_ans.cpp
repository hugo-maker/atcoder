#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N, P;
  cin >> N >> P;
  vector<int> score(101, 0);
  for (int i = 0; i < N; ++i)
  {
    int a;
    cin >> a;
    ++score[a];
  }

  int ans = 0;
  for (int i = 0; i < P; ++i)
  {
    ans += score[i];
  }
  cout << ans << endl;
  return 0;
}
