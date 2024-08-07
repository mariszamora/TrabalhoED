#pragma once
#include "Dictionary.h"


//binary search tree hearder file

typedef struct BSTree {

	Dictionary content;	//a memória para o array de caracteres é alocada dinamicamente
	struct BSTree* leftTree;
	struct BSTree* rightTree;

} BSTree;


void insertNode(struct BSTree**, Dictionary);
void inicializeBSTreeUsingDictionary(BSTree *, char *);
void processTreeInfo(struct BSTree *); //deve gerar as estatística da árvore;
void simplifyText(struct BSTree** tree, char* text, int* counter);//simplifica o tempo, atualiza o numero de comp;


BSTree* inicializeBSTree(void);


BSTree* BSTreeSearch(BSTree*, char*, int*);
