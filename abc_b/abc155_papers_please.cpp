#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }

  bool approved = true;
  for (int i = 0; i < N; ++i)
  {
    if (A[i] % 2 == 1)
    {
      continue;
    }
    else if (A[i] % 3 == 0 || A[i] % 5 == 0)
    {
      continue;
    }
    else
    {
      approved = false;
    }
  }

  if (approved)
  {
    cout << "APPROVED" << endl;
  }
  else
  {
    cout << "DENIED" << endl;
  }

  return 0;
}
