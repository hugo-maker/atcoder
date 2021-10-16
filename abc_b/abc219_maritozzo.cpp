#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  vector<string> S(3);
  for (string & s : S)
  {
    cin >> s;
  }

  string T;
  cin >> T;
  string ans;
  for (const char t : T)
  {
    ans += S[t - '1'];
  }
  cout << ans << endl;
  return 0;
}
