#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
typedef char string[50];

int main(int argc, char *argv[]){
	srand(time(NULL));
	int option, genap, banyak_bilangan, bilangan, berapa, jml_faktor = 0, random_number;
	do{	
	system("cls");
	printf("[1] Tampilkan bilangan genap\n");
	printf("[2] Tampilkan faktor dari suatu bilangan\n");
	printf("[3] Tampilkan angka random dari (1-20)\n");
	printf("[0] Exit\n");
	printf("pilih: ");scanf("%d", &option);
	
	if(option == 1){
		printf("masukkan bilangan ke-");scanf("%d", &genap);
		for(int i = 1; i <= genap; i++){
			if(i%2 == 0){
				printf("bilangan : %d\n", i);
				banyak_bilangan += 1;
			}
		}
		printf("banyak bilangan : %d\n", banyak_bilangan);
	}
	else if(option == 2){
		printf("masukkan bilangan :");scanf("%d", &bilangan);
		if(bilangan == 0){
			printf("gada faktor boy\n");
			getch();
		}
		for(int i = 1; i<=bilangan; i++){
			if(bilangan % i == 0){
				printf("faktor : %d\n", i);
				jml_faktor += 1;
			}
		}
		printf("jumlah faktor : %d\n", jml_faktor);
	}
	else if(option == 3){
		
		printf("masukkan berapa kali ingin mengeluarkan :");scanf("%d", &berapa);
		
		for(int i = 0; i < berapa; i++){
			printf("hasil: %d\n", 1 + rand() % 20);
		}
		
	}
	getch();
	}
	while(option != 0);
}
