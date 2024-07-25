#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    printf("%d", isNumber("cats"));
    return 0;
}

int isNumber(char *string)
{
	/* return 1 if string is a number */
	int i;
	return( (sscanf(string, "%d", &i)) == 1);
}