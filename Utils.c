#include "Utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINE_DEFAULT_SIZE 30
//deve implementar as funcoes do utils

void readFileNames(char* inputFile, char* outputFile, char* dicFile, char* argv[]) 
{
	inputFile = argv[1];
	outputFile = argv[2];
	dicFile = argv[3];
}

void setDefaultString(unsigned char* line) {

	for (int i = 0; i < LINE_DEFAULT_SIZE - 1; i++) {
		line[i] = '\0';
	}
	line[LINE_DEFAULT_SIZE] = '\n';
}

unsigned char* readLine(FILE* pFile, int* VAR_EOF) 
{
	int lineSize = LINE_DEFAULT_SIZE;
	unsigned char* line = malloc(LINE_DEFAULT_SIZE);

	setDefaultString(line);

	char c = ' ';
	int readCharCounter = 0;

	while ((c = getc(pFile)) != EOF)
	{
		if (c != '\n') 
		{
				readCharCounter++;
				if (readCharCounter > lineSize) 
				{
					//TODO: caso precise realocar mem, deve preencher as demais posicoes com 0;
					//atualmente, está ficando com lixo de mem;
				}
				
				line[readCharCounter - 1] = c;
		}
		else 
		{
			return line;
		}
	}

	*VAR_EOF = 1;
	return line;
}