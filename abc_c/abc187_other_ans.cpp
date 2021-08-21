#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
  int N;
  cin >> N;
  set<string> se1, se2;
  for (int i = 0; i < N; ++i)
  {
    string str;
    cin >> str;
    if (str[0] == '!')
    {
      se1.insert(str.substr(1));
    }
    else
    {
      se2.insert(str);
    }
  }

  string res = "";
  for (auto it : se1)
  {
    if (se2.count(it))
    {
      res = it;
    }
  }
  if (res == "")
  {
    cout << "satisfiable" << endl;
  }
  else
  {
    cout << res << endl;
  }
  return 0;
}
