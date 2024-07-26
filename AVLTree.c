#include "AVLTree.h"


AVLTree* inicializeAVLTree(void) {
	return NULL;
}


AVLTree* BSTreeSearch(AVLTree* tree, char* searchValue, int* comp) {

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
