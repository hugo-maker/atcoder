#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool is_palindrome(string s1)
{
  string s2 = s1;
  reverse(s2.begin(), s2.end());
  if (s1 == s2)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  string S;
  cin >> S;

  string str1 = S.substr(0, (S.size() - 1) / 2);

  string str2 = S.substr((S.size() + 3) / 2 - 1, S.size());

  if (is_palindrome(S) && is_palindrome(str1) && is_palindrome(str2))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
