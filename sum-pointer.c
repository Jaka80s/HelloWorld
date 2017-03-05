#include<stdio.h>

int SumA(int *p, int n){
	int sum = 0, i = 0;
	for(i=0; i<n; i++)
	   sum += p[i];
	return sum;
}

int main(){
	int A[5] = {1, 2, 3, 4, 5};
	
	int y = SumA(A, 5);
	printf("%d\n", y);
	system("pause"); 
}
