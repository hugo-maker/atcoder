#include <iostream>
#include <string>
using namespace std;

int main()
{
  string S;
  cin >> S;

  for (int end = S.size() - 2; end >= 2; end -= 2)
  {
    int middle = end / 2;

    if (S.substr(0, middle) == S.substr(middle, end - middle))
    {
      cout << end << endl;
      return 0;
    }
  }
}
