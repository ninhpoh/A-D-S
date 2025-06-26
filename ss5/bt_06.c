//
// Created by PC on 26/06/2025.
//
#include "./coment.h"
int tong(int *array,int n) {
   if (n ==0) {
      return 0;
   }
   return array[n-1] + tong(array,n-1);
}
int main() {
   int n;
   printf("so luong phan tu: ");
   scanf("%d", &n);
   int *array = (int*)malloc(n * sizeof(int));
   for (int i = 0; i < n; i++) {
      printf("nhap phan tu vi tri arr[%d]: ",i);
      scanf("%d", &array[i]);
   }
   printf("tong tu %d den %d = %d",array[0],array[n-1], tong(array,n));

}