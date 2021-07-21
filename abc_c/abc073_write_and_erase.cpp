#include <iostream>
#include <set>
using namespace std;

int main()
{
  int N;
  cin >> N;
  set<long long> A;
  long long temp;
  for (int i = 0; i < N; ++i)
  {
    cin >> temp;
    if (A.find(temp) == A.end())
    {
      A.insert(temp);
    }
    else
    {
      A.erase(temp);
    }
  }

  cout << A.size() << endl;
  return 0;
}
