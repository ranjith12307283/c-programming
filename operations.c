#include<stdio.h>
int main () {
	int a,b,add,sub,mul,div;
	printf("please enter the value of a=");
	scanf( "%d",& a);
	printf("plese enter the value of b=");
	scanf("%d",& b);
	 add=a + b;
	 printf("sum of the two numbers %d\n",add);
	 sub=a-b;
	 printf("subtraction of the two numbers %d\n",sub);
	 mul=a*b;
	 printf("multiplication of two numbers %d\n",mul);
	 div=a/b;
	  printf("division of two numbers %d\n",div);
	 return 0;
}
