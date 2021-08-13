#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int tmp;
  set<int> S;
  vector<int> A;
  for (int i = 0; i < N; ++i)
  {
    cin >> tmp;
    S.insert(tmp);
    A.push_back(tmp);
  }

  if (S.size() == A.size())
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}
