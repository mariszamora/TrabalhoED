#include "Dictionary.h"
#include "Utils.h"
#include <string.h>
#include <stdlib.h>


//arquivo de implementação do dicionário

Dictionary inicializeDictionary(char* line) {

	//dada uma linha no formato: "key value", em que:
	//key: palavra a ser substituída no arquivo;
	//value: palavra a substituir;
	
	char* key = (char*)calloc(LINE_DEFAULT_SIZE, sizeof(char));
	char* value = (char*)calloc(LINE_DEFAULT_SIZE, sizeof(char));

	char* token = strtok(line, "\t");
	strncpy(key, token, strlen(token));

	token = strtok(NULL, " "); 
	strncpy(value, token, strlen(token));

	Dictionary dictionary;
	dictionary.key = key;
	dictionary.value = value;

	return dictionary;
}