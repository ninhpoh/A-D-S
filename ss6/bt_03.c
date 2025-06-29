//
// Created by PC on 27/06/2025.
//
#include "./coment.h"

int sum(int n) {
   if (n == 0) {
      return 0;
   }
   return n%10 + sum(n/10);
}

int main() {
   int n;
   printf("Nhap so nguyen: ");
   scanf("%d", &n);
   if (sum(n) <= 0) {
      printf("ko hop le\n");
   }else {
      printf("%d ", sum(n));
   }
}