#include<stdio.h>
void update(int n){
	int *b=&n;
	printf("%p\n",b);
	n=n+10;
	printf("%d\n",n); // 20
}
void update1(int *b){

	*b=*b+10;
}

int main(){
	//Pointers
	int n=10;
	int *a=&n;
	printf("%p\n",a);
	printf("%d\n",n);  // 10
	printf("%d\n",*a);
	update(n); //Actual arguments
	printf("%d\n",n); // 10
	update1(a);
	printf("%d\n",n); // 20
	
}
