#include <iostream>
using namespace std;

long long N;

void f(long long cur, int use, long long & cnt)
{
  if (cur > N)
  {
    return;
  }
  if (use == 0b111)
  {
    ++cnt;
  }

  f(cur * 10 + 7, use | 0b001, cnt);
  f(cur * 10 + 5, use | 0b010, cnt);
  f(cur * 10 + 3, use | 0b100, cnt);
}

int main()
{
  cin >> N;
  long long ans = 0;
  f(0, 0, ans);
  cout << ans << endl;

  return 0;
}
