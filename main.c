#include <stdio.h>
#include <locale.h>
#include "BSTree.h"
#include "AVLTree.h"
#include "Utils.h"


int main(int argc, char *argv[])
{
	setlocale(LC_CTYPE, "pt_BR.UTF-8");

	char* inputFileName = NULL;
	char* outputFileName = NULL;
	char* dicFileName = "dicionario.txt";

	if (argc == 4)
		readFileNames(inputFileName, outputFileName, dicFileName, argv);

	int comp = 0;
	int treeHeight = 0; 

	//estatística da árvore => passadas como ponteiros para as funcoes, que devem atualizar estas info
	//recebe um arquivo de texto e um dicionário;
	//o dic deve ser inicializado em uma árvore;

	BSTree* pBSTree = inicializeBSTree();
	AVLTree* pAVLTree = inicializeAVLTree();

	inicializeBSTreeUsingDictionary(pBSTree, dicFileName);
	inicializeAVLTreeUsingDictionary(pAVLTree, dicFileName);
	//void inicializeAVLTreeUsingDictionary(AVLTree* pAVLTree, char* fileName)

}
