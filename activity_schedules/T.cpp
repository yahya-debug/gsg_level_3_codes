#include <bits/stdc++.h>
using namespace std;
typedef long long L;

void rec(L n, L s) {
  if (s >= n) return;
  if (!s) for (int i = 0; i < n; i++) printf("*");
  else {
    for (int i = 0; i < (n-s)/2; i++) printf("*");
    for (int i = 0; i < s; i++) printf(" ");
    for (int i = 0; i < (n-s)/2; i++) printf("*");
  }
  printf("\n");
  rec(n, s + (!s ? 1:2));
  if (s != n-2) {
    if (!s) for (int i = 0; i < n; i++) printf("*");
    else {
      for (int i = 0; i < (n-s)/2; i++) printf("*");
      for (int i = 0; i < s; i++) printf(" ");
      for (int i = 0; i < (n-s)/2; i++) printf("*");
    }
    printf("\n");
  }
}

int main() {
  L n;
  scanf("%lld\n", &n);
  rec(n, 0);
  return 0;
}
