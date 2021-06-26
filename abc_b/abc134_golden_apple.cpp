#include <iostream>
using namespace std;

int main()
{
  int N, D;
  cin >> N >> D;

  int ans = (N + D * 2) / (D * 2 + 1);
  cout << ans << endl;

  return 0;
}
