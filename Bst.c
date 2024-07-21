#include <stdio.h>
#include "Bst.h"

//deve implementar as funcoes do BST

void inicializeBSTreeUsingDictionary(BSTree* pBSTree, char* fileName) {

	printf("inicializando arvore \n");


	//lê uma linha do arquivo;
	//cada linha, até o \n é uma chave valor do dicionário
	FILE* inputFile = fopen(fileName, "r");

	if (inputFile != NULL)
		printf("abriu arquivo \n");

	int lineCounter = 0; 
	//a leitura se dá linha a linha, uma vez que já leu uma linha, deve pular esta na proxima chamada;

	struct Dictionary;

	while (getc(inputFile) != EOF) {
		unsigned char* linha = readLine(inputFile, &lineCounter);
		printf("linha: %s", linha);
		free(linha);
	}
	
}