#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N = 0;
  cin >> N;
  vector<int> array;
  int temp = 0;
  for (int i = 0; i < N; ++i)
  {
    cin >> temp;
    array.push_back(temp);
  }
  sort(array.begin(), array.end(), greater<int>{});

  int Alice = 0;
  int Bob = 0;

  for (int i = 0; i < N; ++i)
  {
    if (i % 2)
    {
      Bob += array[i];
    }
    else
    {
      Alice += array[i];
    }
  }

  cout << Alice - Bob << endl;

  return 0;
}
