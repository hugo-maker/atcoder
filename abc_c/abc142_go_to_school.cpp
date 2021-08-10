#include <iostream>
#include <map>
using namespace std;

int main()
{
  int N;
  cin >> N;
  map<int, int> m;
  int A;
  for (int i = 1; i <= N; ++i)
  {
    cin >> A;
    m.insert(make_pair(A, i));
  }

  for (int i = 1; i <= N; ++i)
  {
    if (i >= 2)
    {
      cout << " ";
    }
    cout << m[i];
  }
  cout << endl;

  return 0;
}
