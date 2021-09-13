#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s = "";
  for (char c = 'a'; c <= 'z'; ++c)
  {
    s += c;
  }

  for (int i = 0; i < 26; ++i)
  {
    int n;
    cin >> n;
    --n;
    cout << s[n];
  }
  cout << endl;
  return 0;
}
