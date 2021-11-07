#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
typedef char string[50];

int main(){
	int angka;
	int jumlah;
	do{
		printf("masukkan angka: ");scanf("%d", &angka);
		jumlah+= angka;
	}
	while(angka!= 0);
	printf("total number that you entered : %d\n", jumlah);
	getch();
}
