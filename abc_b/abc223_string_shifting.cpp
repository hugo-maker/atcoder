#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  string S;
  cin >> S;
  vector<string> v;
  for (int i = 0; i < S.size(); ++i)
  {
    string b = S.substr(0, i);
    string a = S.substr(i);
    string s = a + b;
    v.push_back(s);
  }
  sort(v.begin(), v.end());
  cout << v[0] << endl;
  cout << v[v.size() - 1] << endl;
  return 0;
}
