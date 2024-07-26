#pragma once


//binary search tree hearder file

typedef struct {

	char* key;	//representa a chave: valor a ser substituido;
	char* value;	//representa o valor a substituir;

} Dictionary;


typedef struct BSTree {

	Dictionary content;	//a mem�ria para o array de caracteres � alocada dinamicamente
	struct BSTree* leftTree;
	struct BSTree* rightTree;

} BSTree;


BSTree* createBSTree();	//retorna um ponteiro para uma BST
void insertNode(struct BSTree*, char*);
void inicializeBSTreeUsingDictionary(BSTree *, char *);
void processTreeInfo(struct BSTree *); //deve gerar as estat�stica da �rvore;
void simplifyText(struct BSTree** tree, char* text, int* counter);//simplifica o tempo, atualiza o numero de comp;

Dictionary* inicializeDictionary(char* fileLane);
//inicializa um diction�rio

BSTree* inicializeBSTree(void);


BSTree* consulta(BSTree*, char*, int*);
