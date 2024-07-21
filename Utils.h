#pragma once
#include <stdio.h>


//utils related to file r/w

char* readFileContent(char* fileName);
void createOutputFile(char* fileName, char* fileContent);


//recebe os endere�os dos ponteiros para as as strings de arquivos e o vetor com os par�metros
//deve carregar os ponteiros com as strings;

unsigned char* readLine(FILE* fileName, int* counter, int* VAR_EOF);
//l� apenas uma linha do arquivo de dic
//l� at� encontrar \n

char readWord(FILE* fileName, int counter);
//l� apenas palavras do arquivo;

void writeStatisticsFile(char*);
//escreve as estat�sticas;

void writeOutputFile(char*);


void readFileNames(char*, char*, char*, char* []);

