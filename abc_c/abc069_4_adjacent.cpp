#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int four = 0;
  int odd = 0;
  int num;
  for (int i = 0; i < N; ++i)
  {
    cin >> num;
    if (num % 2 == 1)
    {
      ++odd;
    }
    else if (num % 4 == 0)
    {
      ++four;
    }
  }

  if (odd + four == N && odd <= four + 1)
  {
    cout << "Yes" << endl;
  }
  else if (odd <= four)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
