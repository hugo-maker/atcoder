#include <iostream>
#include <string>
using namespace std;

int main()
{
  string N;
  cin >> N;

  int sum = 0;
  for (int i = 0; i < N.size(); ++i)
  {
    char c = N[i];
    int digit = c - '0';
    sum += digit;
  }

  if (sum % 9 == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
