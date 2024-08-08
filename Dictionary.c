#include "Dictionary.h"
#include "Utils.h"
#include <string.h>
#include <stdlib.h>


//arquivo de implementa��o do dicion�rio


//possíveis problemas na função: em dicionario.txt algumas vezes a key e o value são separados por tab, a função não se prepara pra isso
//em dicionario.txt a key é sempre uma palavra e o value pode ser mais de uma, acho que a função não se prepara pra isso também
//proposta de solução: acho que talvez seja melhor fazer num "brute force" com while pra separar a primeira palavra e jogar o resto da string no value
Dictionary inicializeDictionary(char* line) {

	//dada uma linha no formato: "key value", em que:
	//key: palavra a ser substitu�da no arquivo;
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