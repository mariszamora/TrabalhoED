#include "AVLTree.h"
#include <stdio.h>
#include <string.h>

//ToDo: -função de inserção(faço amanhã/quinta)		-função inicializeAVLTreeUsingDictionary


AVLTree* inicializeAVLTree() {
	return NULL;
}

//essencialmente a mesma função de busca da ABP, mas acho bom deixar como outra função pra ficar mais organizado
//imagino que comp seja a quantidade de comparações totais e tratei como tal
AVLTree* AVLTreeSearch(AVLTree* tree, char* searchValue, int* comp) {
	int stringEqual;	//variavel usada só pra não chamar strcmp duas vezes

	while (tree!=NULL){
		comp++;
		stringEqual = strcmp((tree->content).key, searchValue);
		if (stringEqual == 0)
			return tree; 
		else {
			if (stringEqual > 0)
				tree = tree->leftTree;
			else
				tree = tree->rightTree;
		}
	}
	return NULL; 

}

//fiz essa pra ajudar na inserção, ela retorna o nodo mais próximo das folhas que precisa de balanceamento
//não achei um jeito mais eficiente de encontrar o nodo que precisa ser balanceado que não seja recalculando todos os fatores de balanceamento
AVLTree* recalculateBalancingFactor(AVLTree* tree){
	if(tree != NULL){
		tree->balanceFactor = AVLTreeHeight(tree->leftTree) - AVLTreeHeight(tree->rightTree);
		recalculateBalancingFactor(tree->leftTree);
		recalculateBalancingFactor(tree->rightTree);
		if(tree->balanceFactor == 2 || tree->balanceFactor == -2)
			return tree;		//vai retornar sempre a mais próxima da folha
	}

	return NULL;
}

void inicializeAVLTreeUsingDictionary(AVLTree* pAVLTree, char* fileName) {
	//deve inicializar uma �rvore AVL, com os dados do arquivo de entrada => dicion�rio de sinonimos;
}

int AVLTreeHeight(AVLTree *tree){
    int Alt_Esq, Alt_Dir;
        if (tree == NULL)
            return 0;
        else{
            Alt_Esq = AVLTreeHeight(tree->leftTree);
            Alt_Dir = AVLTreeHeight(tree->rightTree);
            if (Alt_Esq > Alt_Dir)
                return (1 + Alt_Esq);
            else
                return (1 + Alt_Dir);
        }
}

AVLTree* rotateRight(AVLTree* p){
 	AVLTree *u;
	u = p->leftTree;
 	p->leftTree = u->rightTree;
 	u->rightTree = p;
 	p->balanceFactor = AVLTreeHeight(p->leftTree) - AVLTreeHeight(p->rightTree); //deve dar 0, mas só pra garantir
 	p = u;
	p->balanceFactor = AVLTreeHeight(p->leftTree) - AVLTreeHeight(p->rightTree);
	return p;
}

AVLTree* rotateLeft(AVLTree *p){
 	AVLTree *z;
 	z = p->rightTree;
 	p->rightTree = z->leftTree;
 	z->leftTree = p;
 	p->balanceFactor = AVLTreeHeight(p->leftTree) - AVLTreeHeight(p->rightTree);
 	p = z;
	p->balanceFactor = AVLTreeHeight(p->leftTree) - AVLTreeHeight(p->rightTree);
 	return p;
}

AVLTree* rotateDoubleRight(AVLTree* p){
 	AVLTree *u, *v;

 	u = p->leftTree;
	v = u->rightTree;
	u->rightTree = v->leftTree;
	v->leftTree = u;
	p->leftTree = v->rightTree;
 	v->rightTree = p;

 	if (v->balanceFactor == 1)
		p->balanceFactor = -1;
 	else p->balanceFactor = 0;

 	if (v->balanceFactor == -1) 
		u->balanceFactor = 1;
 	else u->balanceFactor = 0;

 	p = v;
 	return p;
}

AVLTree* rotacao_dupla_esquerda (AVLTree *p){
 	AVLTree *z, *y;

 	z = p->rightTree;
 	y = z->leftTree;

 	z->leftTree = y->rightTree;
 	y->rightTree = z;
 	p->rightTree = y->leftTree;
 	y->leftTree = p;

 	if (y->balanceFactor == -1) 
		p->balanceFactor = 1;
 	else p->balanceFactor = 0;

 	if (y->balanceFactor == 1) 
		z->balanceFactor = -1;
 	else z->balanceFactor = 0;

 	p = y;
 	return p;
}