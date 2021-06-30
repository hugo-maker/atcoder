#include <iostream>
#include <string>
using namespace std;

int main()
{
  string S;
  cin >> S;

  char c = S[5];
  int i = S[6] - '0';
  if (c == '1' || i >= 5)
  {
    cout << "TBD" << endl;
  }
  else
  {
    cout << "Heisei" << endl;
  }

  return 0;
}
