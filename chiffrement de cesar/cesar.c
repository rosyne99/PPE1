/*
 * test.c
 *
 *  Created on: Nov 12, 2019
 *      Author: Rosine Laridain
 */

#include<stdio.h>
#include<stdlib.h>
int main (){
char message[30];
char nom_du_fichier[30];
int nombre_de_ligne;
FILE*fnormal;
printf("Entrer le nom du fichier a creer:");
scanf("%c",nom_du_fichier);
fnormal=fopen(nom_du_fichier,"w");
if(fnormal==NULL){
printf("Error");


}
	printf("Entrez les messages");
	scanf("%c",message);
	fprintf(fnormal,"%c",message);


fclose(fnormal);

printf("\n");
scanf("\n");

	return 0;
	system("pause");

}



