#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
  string s;
  cin >> s;
  if (s.size() == 1)
  {
    cout << 0 << endl;
    return 0;
  }

  string a, b;
  if (s.size() % 2 == 0)
  {
    a = s.substr(0, s.size() / 2);
    b = s.substr(s.size() / 2, s.size() - 1);
  }
  else
  {
    a = s.substr(0, s.size() / 2 + 1);
    b = s.substr(s.size() / 2 + 1, s.size() - 1);
  }

  int A = stoi(a);
  int B = stoi(b);

  int ans = 0;

  if (s.size() % 2 == 0)
  {
    if (A > B)
    {
      ans = A - 1;
    }
    else
    {
      ans = A;
    }
  }
  else
  {
    int tmp = pow(10, a.size() - 1);
    ans = tmp - 1;
  }

  cout << ans << endl;
}
