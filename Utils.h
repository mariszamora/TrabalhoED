#pragma once
#include <stdio.h>


//utils related to file r/w

char* readFileContent(char* fileName);
void createOutputFile(char* fileName, char* fileContent);


//recebe os endereços dos ponteiros para as as strings de arquivos e o vetor com os parâmetros
//deve carregar os ponteiros com as strings;

unsigned char* readLine(FILE* fileName, int* counter, int* VAR_EOF);
//lê apenas uma linha do arquivo de dic
//lê até encontrar \n

char readWord(FILE* fileName, int counter);
//lê apenas palavras do arquivo;

void writeStatisticsFile(char*);
//escreve as estatísticas;

void writeOutputFile(char*);


void readFileNames(char*, char*, char*, char* []);

