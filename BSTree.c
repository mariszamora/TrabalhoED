#include <stdio.h>
#include <stdlib.h>
#include "Utils.h"
#include "BSTree.h"
#include "Dictionary.h"

//deve implementar as funcoes do BST


BSTree* inicializeBSTree(void) {
	return NULL;
}

void inicializeBSTreeUsingDictionary(BSTree* pBSTree, char* fileName) {

	FILE* inputFile = fopen(fileName, "r");

	//a leitura se d� linha a linha, uma vez que j� leu uma linha, deve pular esta na proxima chamada;

	Dictionary* dictionary = NULL;
	char* linha = NULL;
	int VAR_EOF = 0;

	while (!VAR_EOF) {

		linha = readLine(inputFile, &VAR_EOF);
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



//ToDo:

//inserir nodo na �rvore;
//desmontar arvore;

BSTree* createNewNode(Dictionary dictionary) {

	BSTree* newNode = (BSTree*)malloc(sizeof(BSTree*));
	newNode->content = dictionary;
	newNode->leftTree = NULL;
	newNode->rightTree = NULL;

	return newNode;
}

void insertNode(BSTree** pBSTree, Dictionary dictionary) {

	if (*pBSTree == NULL)//o ponteiro aponta para null
	{
		*pBSTree = createNewNode(dictionary);
		return;
	}
	//caso contr�rio, deve percorrer a arvore at� encontrar o local de inser��o
	BSTree* pBSTree_aux = *pBSTree;

}