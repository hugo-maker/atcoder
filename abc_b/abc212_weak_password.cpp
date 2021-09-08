#include <iostream>
#include <string>
using namespace std;

int main()
{
  string S;
  cin >> S;
  string ans;
  if (S[0] == S[1] && S[1] == S[2] && S[2] == S[3])
  {
    ans = "Weak";
  }
  else
  {
    int zero = S[0] - '0';
    int one = S[1] - '0';
    int two = S[2] - '0';
    int three = S[3] - '0';

    if (one == (zero + 1) % 10 && two == (one + 1) % 10 && three == (two + 1) % 10)
    {
      ans = "Weak";
    }
    else
    {
      ans = "Strong";
    }
  }

  cout << ans << endl;
  return 0;
}
