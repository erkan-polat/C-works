#include<stdio.h>

int main() {
	
	int a;
	int *aPtr;
	
	a=7;
	aPtr=&a;
	
	printf("The adress of is a %p"
	       "\n The value of aPtr is %p",&a,aPtr);
	       
	
	printf("\n\nThe value of a is %d"
	       "\nThe value of *aPtr is %d",a,*aPtr);
	       
	printf("\n\nShowing that * and & are compement of "
	       "each other\n&*aPtr=%p"
		   "\n*&aPtr=%p\n",&*aPtr,*&aPtr);
		   
		   return 0;
		      
}
