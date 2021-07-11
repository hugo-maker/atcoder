#include <iostream>
#include <set>
using namespace std;

int main()
{
  set<int> s;
  int temp;
  for (int i = 0; i < 3; ++i)
  {
    cin >> temp;
    s.insert(temp);
  }

  cout << s.size() << endl;
  return 0;
}
