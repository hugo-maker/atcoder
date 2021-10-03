#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string N;
  cin >> N;
  int len = (int)N.size();
  sort(N.begin(), N.end());
  int ans = 0;
  do
  {
    for (int i = 1; i < N.size(); ++i)
    {
      int l = 0, r = 0;
      for (int j = 0; j < i; ++j)
      {
        l = l * 10 + N[j] - '0';
      }
      for (int j = i; j < N.size(); ++j)
      {
        r = r * 10 + N[j] - '0';
      }
      ans = max(ans, l * r);
    }
  } while (next_permutation(N.begin(), N.end()));
  cout << ans << endl;
  return 0;
}
