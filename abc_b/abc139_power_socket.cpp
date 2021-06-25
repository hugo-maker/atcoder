#include <iostream>
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;

  int sum = 1;
  int count = 0;
  while (sum < B)
  {
    --sum;
    sum += A;
    ++count;
  }

  cout << count << endl;

  return 0;
}
