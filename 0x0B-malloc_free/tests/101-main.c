#include "../main.h"

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab, **me;

    tab = strtow("      ALX School         #cisfun      ");
    me = strtow("my name is Grace ");
    if (tab == NULL || me == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    print_tab(me);
    return (0);
}
