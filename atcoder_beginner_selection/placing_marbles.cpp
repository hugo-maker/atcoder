#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s;
  cin >> s;

  int count = 0;
  for (size_t i = 0; i < s.size(); ++i)
  {
    int num = s[i] - '0';
    if (num)
    {
      ++count;
    }
  }
  cout << count << endl;

  return 0;
}
