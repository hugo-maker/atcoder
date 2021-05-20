#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> & array)
{
  int count = 0;
  bool is_all_even = true;

  while (true)
  {
    for (int i = 0; i < array.size(); ++i)
    {
      if (array[i] % 2)
      {
        is_all_even = false;
        break;
      }
      array[i] /= 2;
    }

    if (is_all_even)
    {
      ++count;
    }
    else
    {
      break;
    }
  }

  return count;
}

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }

  cout << solve(A) << endl;

  return 0;
}
