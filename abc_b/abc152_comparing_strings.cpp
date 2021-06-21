#include <iostream>
#include <string>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  string S = "";
  string T = "";

  for (int i = 0; i < b; ++i)
  {
    S += to_string(a);
  }
  for (int i = 0; i < a; ++i)
  {
    T += to_string(b);
  }

  if (S < T)
  {
    cout << S << endl;
  }
  else
  {
    cout << T << endl;
  }

  return 0;
}
