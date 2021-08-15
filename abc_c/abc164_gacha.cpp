#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
  set<string> s;
  int N;
  cin >> N;
  string S;
  for (int i = 0; i < N; ++i)
  {
    cin >> S;
    s.insert(S);
  }

  cout << s.size() << endl;
  return 0;
}
