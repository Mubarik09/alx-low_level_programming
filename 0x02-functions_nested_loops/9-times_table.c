#include "main.h"
#include <stdio.h>
/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
int i, j, result;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
result = i * j;
if (j == 0)
printf("%d, ", result);
else
{
printf("2%d", result);
if (j != 9)
printf(", ");
}
}
printf("\n");
}
}
