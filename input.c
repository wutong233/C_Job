#include <stdio.h>
#include <stdlib.h>
#include "input.h"

void input_char(char *prompt, char *c)
{
    char line[80];
	printf("%-10s",prompt);
	scanf("%s",line);
	*c = line[0];
}

void input_int(char *prompt, int *number)
{
    printf("%-10s", prompt);
    scanf("%d", number);
}

void input_float(char *prompt, float *number)
{
    printf("%-10s", prompt);
    scanf("%f", number);
}

void input_string(char *prompt, char *string)
{
    printf("%-10s", prompt);
    scanf("%s", string);
}
