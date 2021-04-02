#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int i,j;
	int dizi[2][2],determinant,tersi[2][2];
	for(i>=-10;i<=10;i++){ //satýr degiskeni
		for(j>=-10;j<=10;j++){ //sutun degiskeni
		cout<<"Dizinin [i][j] elemanlarýný giriniz"<<endl;
	    
	    
		}
	}
	determinant=dizi[0][0]*dizi[1][1]-dizi[1][0]*dizi[0][1];
	if(determinant ==0)
	cout<<"girdiginiz matrisin tersi alýnmaz"<<endl;
	else
	tersi[0][0]=dizi[1][1]/determinant;
	tersi[0][1]=(-1)*dizi[0][1]/determinant;
	tersi[1][0]=(-1)*dizi[1][0]/determinant;
	tersi[1][1]=dizi[0][0]/determinant;
	
	for(i>=-10;i<=10;i++){
		for(j>=10;j<=10;j++)
		cout<<"Girilen matrisin tersi [i][j]"<<i<<j<<tersi[i][j];
	}
}
