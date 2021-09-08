#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
  set<string> s;
  for (int i = 0; i < 4; ++i)
  {
    string S;
    cin >> S;
    s.insert(S);
  }
  if (s.size() == 4)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
