#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  long long N;
  cin >> N;

  string s, ans;
  for (char c = 'a'; c <= 'z'; ++c)
  {
    s.push_back(c);
  }

  while (N > 0)
  {
    long long rest = N % 26;
    if (rest == 0)
    {
      ans.push_back(s[25]);
      N /= 26;
      --N;
    }
    else
    {
      ans.push_back(s[--rest]);
      N /= 26;
    }
  }

  reverse(ans.begin(), ans.end());
  cout << ans << endl;
  return 0;
}
