#pragma once
typedef struct {

	char* key;	//representa a chave: valor a ser substituido;
	char* value;	//representa o valor a substituir;

} Dictionary;

Dictionary inicializeDictionary(char* line);
