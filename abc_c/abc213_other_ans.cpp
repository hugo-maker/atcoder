#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int H, W, N;

vector<int> compress(vector<int> a)
{
  map<int, int> mp;
  for (int i = 0; i < N; ++i)
  {
    mp[a[i]] = 0;
  }
  int id = 1;
  for (auto & p : mp)
  {
    p.second = id++;
  }

  for (int i = 0; i < N; ++i)
  {
    a[i] = mp[a[i]];
  }
  return a;
}

int main()
{
  cin >> H >> W >> N;
  vector<int> A(N), B(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i] >> B[i];
  }
  A = compress(A);
  B = compress(B);
  for (int i = 0; i < N; ++i)
  {
    cout << A[i] << " " << B[i] << endl;
  }
  return 0;
}
