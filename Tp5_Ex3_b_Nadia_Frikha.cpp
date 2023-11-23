//EX3:Ecrire un programme qui lit deux chaînes de caractères CH1 et CH2 et qui copie la première moitie de CH1 et la premiere moitie de CH2 dans une troisieme chaine CH3. Afficher le resultat.

#include<stdio.h>
#include<string.h>
int main(){
	// question b) utilisation uniquement des fonctions gets et puts
	
	char CH1[10],CH2[10];
	char CH3[10];
	int i,j; //compteur
	
	//lire 2 chaines CH1 et CH2
	printf("saisir une chaine CH1:");
	gets(CH1);
	printf("\n saisir une chaine CH2:");
	gets(CH2);
	
	//copier la premiere moitie de CH1 dans CH3
	for ( i=0; i<strlen(CH1)/2 ;i++){
		CH3[i]= CH1[i];
	}
	
	// ajout de la premiere moitie de CH2 dans CH3
	j=i ;
	for ( i=0; i<strlen(CH2)/2 ;i++){
		CH3[j]=CH2[i];
		j++;
	}
	
	//affichage de CH3
	printf("\n CH3:%s",CH3);
	
	return 0;
}
