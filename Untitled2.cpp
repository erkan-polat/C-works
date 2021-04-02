#include <stdio.h>
#include <stdlib.h>
 
main() {
	int i,j; // D�ng� de�i�kenlerini tan�mlad�m.
	float dizi[2][2],determinant,tersi[2][2]; // Buradaki de�erler ondal�kl� olabilece�i i�in float tan�mlad�m
	for(i=0;i<=1;i++){   //  i de�i�kenini satir de�i�kenidir
		for(j=0;j<=1;j++){ // j de�i�kenini s�t�n de�i�kenidir. 
			printf("Dizinin [%d][%d] elamanini girin ",i+1,j+1); // Kullan�c�ya ho� g�z�kmesi a��s�ndan 1 ile toplayarak ekrana yaz�yorum.
			scanf("%f",&dizi[i][j]);  // �rne�in i=0 ve j=0 iken dizinin[0][0] elemanini almi� olaca��m.
		}
	}
	determinant=dizi[0][0]*dizi[1][1]-dizi[0][1]*dizi[1][0]; //  Bildi�imiz y�ntem ile determinant�n� al�yoruz.
	if(determinant==0)printf("Bu matrisin tersi mevcut degildir");
	else{ //Tersi mevcut ise resimdeki form�l� uygulayarak, yeni dizimizi olu�turuyoruz.
		tersi[0][0]=dizi[1][1] / determinant;
		tersi[0][1]=(-1)*dizi[0][1] / determinant;
		tersi[1][0]=(-1)*dizi[1][0] / determinant;
		tersi[1][1]=dizi[0][0] / determinant;
		for(i=0;i<=1;i++){
			for(j=0;j<=1;j++){ //Ayn� y�ntem ile elde etti�im matrisi ekrana bast�r�yorum. 
			printf("Girilen dizinin tersinin [%d][%d] elamanini %.2f dir \n",i+1,j+1,tersi[i][j]); //Virg�lden sonraki 2 basama�� g�stermeyi tercih ettim. (%.2f)
			}
		}
	}
	return 0;
}
