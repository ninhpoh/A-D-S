#include "../ss1/coment.h"
void printDouble(int n){
	int i = 1;
	while (i < n) {
		printf("%d\n", i);
		i *= 2;
	}
}

int main(){
	printDouble();
	return 0;
}
// Độ phức tạp thời gian: O(1)