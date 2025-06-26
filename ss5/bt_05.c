//
// Created by PC on 26/06/2025.
//
#include "./coment.h"
int isPalin(char str[],int left,int right) {
    if (left > right) {
        return 1;
    }
    if (str[left] != str[right]) {
        return 0;
    }
    return isPalin(str,left+1,right-1);
}
int main() {
    char str[50];
    printf("Enter string:");
    fgets(str,50,stdin);
    str[strlen(str)-1] = '\0';
    int len = strlen(str);
    int result = isPalin(str,0,len-1);
    if (result == 1) {
        printf("doi xung");
    }
    else {
        printf("ko doi xung");
    }
}