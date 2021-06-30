#include <iostream>
#include <string>
using namespace std;

int main()
{
  string n;
  cin >> n;
  for (int i = 0; i < n.size(); ++i)
  {
    int digit = n[i] - '0';
    if (digit == 1)
    {
      cout << 9;
    }
    else if (digit == 9)
    {
      cout << 1;
    }
  }
  cout << endl;
  return 0;
}
