#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool is_palindromic(int n)
{
  string s = to_string(n);
  string t;
  t.resize(s.size());
  reverse_copy(s.begin(), s.end(), t.begin());
  if (s == t)
  {
    return true;
  }
  return false;
}

int main()
{
  int A, B;
  cin >> A >> B;
  int cnt = 0;
  for (int i = A; i <= B; ++i)
  {
    if (is_palindromic(i))
    {
      ++cnt;
    }
  }

  cout << cnt << endl;
  return 0;
}
