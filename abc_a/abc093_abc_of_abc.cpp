#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string S;
  cin >> S;
  sort(S.begin(), S.end());
  if (S == "abc")
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
