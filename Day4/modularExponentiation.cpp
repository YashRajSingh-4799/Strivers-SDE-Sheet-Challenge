#include <bits/stdc++.h>

int modularExponentiation(int A, int B, int C) {
  if (B == 0) {
    return 1; 
  }

  long long int result = 1;
  long long int base = A % C;

  while (B > 0) {
    if (B % 2 == 1) {
      result = (result * base) % C;
    }
    base = (base * base) % C;
    B /= 2;
  }

  return static_cast<int>(result);
}