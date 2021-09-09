#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
  map<string, int> m;
  m.insert({"ABC", 0});
  m.insert({"ARC", 0});
  m.insert({"AGC", 0});
  m.insert({"AHC", 0});
  for (int i = 0; i < 3; ++i)
  {
    string S;
    cin >> S;
    ++m[S];
  }

  for (auto iter = m.begin(); iter != m.end(); ++iter)
  {
    if (iter->second == 0)
    {
      cout << iter->first << endl;
      return 0;
    }
  }
}
