#pragma once
#include <stdio.h>
#include "Dictionary.h"

//arvore balanceada;

typedef struct AVLTree {

	Dictionary content;
	struct AVLTree* leftTree;
	struct AVLTree* rightTree;
	int balanceFactor;
	//fator de balanceamento de cada nodo, por padrão 0;

} AVLTree;


AVLTree* inicializeAVLTree();


AVLTree* AVLTreeSearch(AVLTree* tree, char* searchValue, int* comp);

void inicializeAVLTreeUsingDictionary(AVLTree* pAVLTree, char* fileName);
