#include<stdio.h>

int main()
{
	int n[10]={20,35,45,86,75,48,69,32,12,59};
	int i;
	
	printf("%s%13s\n","Element","Value");
	
    for(i=1;i<10;i++) {
    	printf("%7d%13d\n",i,n[i]);
	}
	return 0;
}
