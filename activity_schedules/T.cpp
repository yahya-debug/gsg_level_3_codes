#include <bits/stdc++.h>
using namespace std;
typedef long long L;

// activities array
string Ac[3] = {"Football", "Running", "Swimming"};
vector<string> a;
void rec(L n) {
  if (a.size() == n) {
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    printf("\n");
    return;
  }
  for (int i = 0; i < 3; i++)
    if (!a.size() || a.back() != Ac[i]) {
      a.push_back(Ac[i]);
      rec(n);
      a.pop_back();
    }
}

int main() {
  L n;
  scanf("%lld\n", &n);
  rec(n);
  L X = 3*(1 << (n-1));
  printf("COUNT: %lld\n", X);
  return 0;
}
