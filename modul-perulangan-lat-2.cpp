#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
typedef char string[50];

int main(){
	string nama;
	int umur;
	int data;
	
	printf("how many data you'd like to input: ");scanf("%d", &data);
	
	for(int i = 0; i < data; i++){
		printf("input name #%d: ", i+1);fflush(stdin);gets(nama);
		printf("input age #%d: ", i+1, " : ");scanf("%d", &umur);
		printf("\n");
	}
	printf("data berhasil diinput\n");
	getch();
}
