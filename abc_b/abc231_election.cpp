#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
  int N;
  cin >> N;
  map<string, int> m;
  for (int i = 0; i < N; ++i)
  {
    string S;
    cin >> S;
    ++m[S];
  }
  int num = 0;
  string ans = "";
  for (auto e : m)
  {
    if (e.second >= num)
    {
      num = e.second;
      ans = e.first;
    }
  }
  cout << ans << endl;
  return 0;
}
