#include <stdio.h>
#include "Bst.h"
#include "Utils.h"




int main(int argc, char *argv[])
{

	char* inputFileName = NULL;
	char* outputFileName = NULL;
	char dicFileName[] = "dicionario.txt";

	if (argc == 4)
		readFileNames(inputFileName, outputFileName, dicFileName, argv);

	int comp = 0;
	int treeHeight = 0; //estatística da árvore => passadas como ponteiros para as funcoes, que devem atualizar estas info
	//recebe um arquivo de texto e um dicionário;
	//o dic deve ser inicializado em uma árvore;
	struct BSTree* pBSTree = NULL;	//ponteiro para a BST;

	inicializeBSTreeUsingDictionary(pBSTree, dicFileName);

	printf("executou\n");
}
