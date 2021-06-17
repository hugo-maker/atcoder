#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  char a;
  cin >> a;

  if (islower(a))
  {
    cout << "a" << endl;
  }
  else
  {
    cout << "A" << endl;
  }

  return 0;
}
