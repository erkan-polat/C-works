#include <stdio.h>
#include <stdlib.h>
 
main() {
	int i,j; // Döngü deðiþkenlerini tanýmladým.
	float dizi[2][2],determinant,tersi[2][2]; // Buradaki deðerler ondalýklý olabileceði için float tanýmladým
	for(i=0;i<=1;i++){   //  i deðiþkenini satir deðiþkenidir
		for(j=0;j<=1;j++){ // j deðiþkenini sütün deðiþkenidir. 
			printf("Dizinin [%d][%d] elamanini girin ",i+1,j+1); // Kullanýcýya hoþ gözükmesi açýsýndan 1 ile toplayarak ekrana yazýyorum.
			scanf("%f",&dizi[i][j]);  // Örneðin i=0 ve j=0 iken dizinin[0][0] elemanini almiþ olacaðým.
		}
	}
	determinant=dizi[0][0]*dizi[1][1]-dizi[0][1]*dizi[1][0]; //  Bildiðimiz yöntem ile determinantýný alýyoruz.
	if(determinant==0)printf("Bu matrisin tersi mevcut degildir");
	else{ //Tersi mevcut ise resimdeki formülü uygulayarak, yeni dizimizi oluþturuyoruz.
		tersi[0][0]=dizi[1][1] / determinant;
		tersi[0][1]=(-1)*dizi[0][1] / determinant;
		tersi[1][0]=(-1)*dizi[1][0] / determinant;
		tersi[1][1]=dizi[0][0] / determinant;
		for(i=0;i<=1;i++){
			for(j=0;j<=1;j++){ //Ayný yöntem ile elde ettiðim matrisi ekrana bastýrýyorum. 
			printf("Girilen dizinin tersinin [%d][%d] elamanini %.2f dir \n",i+1,j+1,tersi[i][j]); //Virgülden sonraki 2 basamaðý göstermeyi tercih ettim. (%.2f)
			}
		}
	}
	return 0;
}
