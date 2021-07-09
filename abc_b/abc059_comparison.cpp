#include <iostream>
#include <string>
using namespace std;

int main()
{
  string A, B;
  cin >> A >> B;
  string res;
  if (A.size() > B.size())
  {
    res = "GREATER";
  }
  else if (A.size() < B.size())
  {
    res = "LESS";
  }
  else
  {
    if (A == B)
    {
      res = "EQUAL";
    }
    else
    {
      for (int i = 0; i < A.size(); ++i)
      {
        if (A[i] > B[i])
        {
          res = "GREATER";
          break;
        }
        else if (A[i] < B[i])
        {
          res = "LESS";
          break;
        }
      }
    }
  }

  cout << res << endl;
  return 0;
}
