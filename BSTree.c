#include <stdio.h>
#include "BSTree.h"

//deve implementar as funcoes do BST


BSTree* inicializeBSTree(void) {
	return NULL;
}

void inicializeBSTreeUsingDictionary(BSTree* pBSTree, char* fileName) {

	FILE* inputFile = fopen(fileName, "r");

	//a leitura se dá linha a linha, uma vez que já leu uma linha, deve pular esta na proxima chamada;

	Dictionary* dictionary;
	int VAR_EOF = 0;

	while (!VAR_EOF) {
		unsigned char* linha = readLine(inputFile, &VAR_EOF);
		printf("%s \n", linha);

		//tendo a linha, chama a funcao que inicializa o dictionary;
		//dictionary = inicializeDictionary(linha);

		//printf("key: %s", dictionary->key);
		//printf("valeu: %s", dictionary->value);
		//tendo o dictionary, coloca o nodo da arvore;

		//todo: desalocar mem;
		//free(&linha);
	}
}


BSTree* BSTreeSearch(BSTree* tree, char* searchValue, int* comp) {

	while (tree != NULL) {
		*comp++;

		if (tree->content.key == searchValue) {
			*comp++;
			return tree;
		}

		*comp++;

		if (tree->content.key > searchValue)
			tree = tree->leftTree;
		else
			tree = tree->rightTree;
	}

	return NULL;
}