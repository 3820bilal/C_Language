#include<stdio.h>
int main(){
//	p1
//	int marks;
//	int total_marks = 100;
//	for (int i=0;i<4;i++){
//		printf("Please enter the marks of Subject %d: \n",i);
//		scanf("%d",&marks);
//		int percent = (marks*100)/total_marks;
//		if (percent>= 30){
//			printf("You are passed\n");
//		}
//		else{
//			printf("oops! You are fail\n");
//		}
//	}
// 	p3
//	int income;
//	printf("Please enter the income of employe: \n");
//	scanf("%d",&income);
//	if(income>2.5 && income<5){
//		printf("Your tax is 5 percent\n");
//	}
//	else if(income>5 && income<10){
//		printf("Your tax is 20 percent\n");
//	}
//	else{
//		printf("Your tax is 30 percent\n");
//	}

//p4
//	int year;
//	printf("Please enter year: \n");
//	scanf("%d",&year);
//	if(year%4==0){
//		printf("Leap year \n");
//	}
//	else{
//		printf("Not Leap year \n");
//	}

	//p5
	char chr;
	printf("Please enter character: \n");
	scanf("%c",&chr);
	if(chr>='a' && chr<='z'){
	printf("Lowercase: \n");
	}
	else{
	printf("Not Lowercase: \n");
	}
	return 0;
}
