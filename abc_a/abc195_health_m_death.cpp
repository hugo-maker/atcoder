#include <iostream>
using namespace std;

int main()
{
  int M, H;
  cin >> M >> H;
  if (H % M) 
  {
    cout << "No" << endl;
  }
  else
  {
    cout << "Yes" << endl;
  }

  return 0;
}
