#include <stdio.h>
#include <stdlib.h>

typedef struct ProductionRule{
	char *leftPart;
	char *rightPart;
}ProductionRule




void fileConvert(char *fileName, ProductionRule *grammar){
	FILE* fichier = NULL;
	
	fichier = fopen(*filename, "r+");
	assert(fichier != NULL);

	while(!feof(fichier))//lecture du fichier
		fscanf(fichier,"%s"->"%s",grammar->productionRules->leftPart,grammar->productionRules->rightPart)//convertion des regles de production du fichier vers la strucure grammar
	fclose(fichier);																									 //sous la forme(pour chaque case du tableau) partGauche->partDroite (ex:A->B)
}

void isRecognizable(char *fileName, char *mot){
	ProductionRule *gramar;
	grammar->leftPart=malloc(sizeof(char)*10);
	grammar->rightPart=malloc(sizeof(char)*10);
	
	

}
