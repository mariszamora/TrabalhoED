#include "Utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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



char parseString(char caractere) {
	char caracComAcentos[] = "çáÁéÉíÍóÓúÚãÃõÕâÂêÊîÎôÔûÛàÀèÈìÌòÒùÙ";
	char caracSemAcentos[] = "caAeEiIoOuUaAoOaAeEiIoOuUaAeEiIoOuU";
	for (int i = 0; i < strlen(caracComAcentos); ++i) {
		if (caractere == caracComAcentos[i]) {
			return caracSemAcentos[i];
		}
	}
	return caractere;
}



char* readLine(FILE* pFile, int* VAR_EOF) 
{
	char* line = malloc(LINE_DEFAULT_SIZE);

	setDefaultString(line);

	char c = ' ';
	int stringLength = 0;
	int spaceCounter = 0;

	while ((c = getc(pFile)) != EOF)
	{
		c = parseString(c);
		if (c != '\n')
		{
			stringLength++;

			if (stringLength > LINE_DEFAULT_SIZE)
			{
				//TODO: realocar mem para s string maior do que o LINE_DEFAULT_SIZE
			}
				
			line[stringLength - 1] = c;
		}
		else 
		{
			return line;
		}
	}

	*VAR_EOF = 1;
	return line;
}