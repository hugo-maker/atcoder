#include <iostream>
#include <set>
using namespace std;

int main()
{
  int N;
  cin >> N;
  set<int> a;
  int temp;
  for (int i = 0; i < N; ++i)
  {
    cin >> temp;
    a.insert(temp);
  }

  auto start = a.begin();
  auto goal = --a.end();
  cout << *goal - *start << endl;
  return 0;
}
