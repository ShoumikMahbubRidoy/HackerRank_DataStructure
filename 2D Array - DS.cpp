#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {

  int T, ar[1000];
  cin >> T;
  for (int i = 0; i < T; i++)
    cin >> ar[i];
  for (int i = T - 1; i >= 0; i--)
    cout << ar[i] << " ";
  return 0;
}
