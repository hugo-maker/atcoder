#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  set<vector<int>> s;
  for (int i = 0; i < N; ++i)
  {
    int L;
    cin >> L;
    vector<int> v;
    for (int j = 0; j < L; ++j)
    {
      int a;
      cin >> a;
      v.push_back(a);
    }
    s.insert(v);
  }

  cout << s.size() << endl;
  return 0;
}
