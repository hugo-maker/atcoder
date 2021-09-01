#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  long long N;
  cin >> N;

  string ans = "";
  while (N != 0)
  {
    if (N % 2 == 1)
    {
      --N;
      ans += "A";
    }
    else
    {
      N /= 2;
      ans += "B";
    }
  }

  reverse(ans.begin(), ans.end());
  cout << ans << endl;
  return 0;
}
