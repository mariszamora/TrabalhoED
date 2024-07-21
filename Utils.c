#include "Utils.h"
#include <stdio.h>

//deve implementar as funcoes do utils

void readFileNames(char* inputFile, char* outputFile, char* dicFile, char* argv[]) 
{

	inputFile = argv[1];
	outputFile = argv[2];
	dicFile = argv[3];
}

char* readLine(FILE* pFile, int* counter) 
{
	int lineSize = 20;
	char* line = malloc(sizeof(char) * lineSize);
	char c;
	int readCharCounter = 0;
	int readLineCounter = 0;

	while ((c = getc(pFile)) && c != EOF) 
	{
		
		*counter += 1;

		if (c != '\n') 
		{

			if (readLineCounter > *counter)//significa estar lendo uma linha  
			{
				readCharCounter++;
				if (readCharCounter > lineSize) 
				{
					lineSize = lineSize * 2;
					line = realloc(line, lineSize);
				}
				else 
				{
					line[readCharCounter] = c;
				}

			}
		}
		else 
		{
			return line;
		}
	}
}