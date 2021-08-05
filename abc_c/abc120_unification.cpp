#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string S;
  cin >> S;
  int red = 0;
  int blue = 0;
  for (int i = 0; i < S.size(); ++i)
  {
    if (S[i] == '0')
    {
      ++red;
    }
    else
    {
      ++blue;
    }
  }

  cout << 2 * min(red, blue) << endl;
  return 0;
}
