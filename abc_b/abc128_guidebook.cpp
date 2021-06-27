#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct restaurant
{
  string name;
  int score;
  int num;
};

bool comp(const restaurant & a, const restaurant & b)
{
  if (a.name != b.name)
  {
    return a.name < b.name;
  }
  if (a.score != b.score)
  {
    return a.score > b.score;
  }
  return a.num < b.num;
}

int main()
{
  int N;
  cin >> N;
  vector<restaurant> v(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> v[i].name >> v[i].score;
    v[i].num = i + 1;
  }

  sort(v.begin(), v.end(), comp);

  for (int i = 0; i < N; ++i)
  {
    cout << v[i].num << endl;
  }

  return 0;
}
