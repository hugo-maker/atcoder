#include <iostream>
#include <string>
using namespace std;

int main()
{
  string S;
  cin >> S;

  auto i = S.size() - 1;
  char c = S[i];
  if (c == 's')
  {
    S += "es";
  }
  else
  {
    S += "s";
  }

  cout << S << endl;

  return 0;
}
