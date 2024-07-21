#pragma once


//binary search tree hearder file

typedef struct {

	char* key;	//representa a chave: valor a ser substituido;
	char* value;	//representa o valor a substituir;

} Dictionary;


typedef struct BSTree {

	Dictionary content;	//a memória para o array de caracteres é alocada dinamicamente
	struct BSTree* leftTree;
	struct BSTree* rightTree;

} BSTree;



BSTree* createBSTree();	//retorna um ponteiro para uma BST
void insertNode(struct BSTree*, char*);
void inicializeBSTreeUsingDictionary(BSTree *, char *);
void processTreeInfo(struct BSTree *); //deve gerar as estatística da árvore;
void simplifyText(struct BSTree** tree, char* text, int* counter);//simplifica o tempo, atualiza o numero de comp;

Dictionary* inicializeDictionary(char* fileLane);
//inicializa um dictionário

/*

pNodoA* consulta(pNodoA *a, int chave){
	while (a!=NULL){
		comp++;
		if (a->info == chave ){
			comp++;
			return a;
		}
		else {
			comp++;
			if (a->info > chave)
				a = a->esq;
				else
				a = a->dir;
			}
		}
		return NULL;
	}

*/
