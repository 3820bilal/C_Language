#include<stdio.h>

int main(){
	int n;
	printf("Please enter number to print table:\n");
	scanf("%d",&n);
	for(int i=0; i<10;i++){
	printf("%d X %d = %d\n",n,i+1,n*(i+1));
	}
	return 0;
}
