#include "Utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINE_DEFAULT_SIZE 40
//deve implementar as funcoes do utils

void readFileNames(char* inputFile, char* outputFile, char* dicFile, char* argv[]) 
{

	inputFile = argv[1];
	outputFile = argv[2];
	dicFile = argv[3];
}

unsigned char* readLine(FILE* pFile, int* counter) 
{
	int lineSize = LINE_DEFAULT_SIZE;
	//unsigned char* line = malloc(LINE_DEFAULT_SIZE);
	unsigned char* line = (unsigned char*)calloc(LINE_DEFAULT_SIZE, sizeof(unsigned char));
	//inicializa os valores de mem com 0, em vez de valores quaisquer, como no malloc();
	//usei unsigned char por questões de compatibilidade

	if (line != NULL)
		printf("alocou mem \n");


	char c = ' ';
	int readCharCounter = 0;
	int readLineCounter = 0;
	c = getc(pFile);

	while ((c = getc(pFile)) != EOF)
	{
		readLineCounter += 1;

		if (c != '\n') 
		{
			if (readLineCounter > *counter)//significa estar lendo uma linha  
			{
				readCharCounter++;
				if (readCharCounter > lineSize) 
				{
					lineSize = lineSize * 2;
					line = realloc(line, lineSize);
					//TODO: caso precise realocar mem, deve preencher as demais posicoes com 0;
					//atualmente, está ficando com lixo de mem;
				}
				else 
				{
					line[readCharCounter - 1] = c;
				}

			}
		}
		else 
		{
			*counter = readLineCounter;
			printf("%s", line);
			return line;
		}
	}

}