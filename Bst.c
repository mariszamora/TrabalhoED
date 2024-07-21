#include <stdio.h>
#include "Bst.h"

//deve implementar as funcoes do BST

void inicializeBSTreeUsingDictionary(BSTree* pBSTree, char* fileName) {

	printf("inicializando arvore \n");


	//l� uma linha do arquivo;
	//cada linha, at� o \n � uma chave valor do dicion�rio
	FILE* inputFile = fopen(fileName, "r");

	if (inputFile != NULL)
		printf("abriu arquivo \n");

	int lineCounter = 0; 
	//a leitura se d� linha a linha, uma vez que j� leu uma linha, deve pular esta na proxima chamada;

	struct Dictionary;

	while (getc(inputFile) != EOF) {
		unsigned char* linha = readLine(inputFile, &lineCounter);
		printf("linha: %s", linha);
		free(linha);
	}
	
}