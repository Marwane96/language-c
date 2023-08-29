#include <stdio.h>

/**
 * add - this function can make sum of tow numbers
 * 
 * @a: parameter 1
 * @b: parameter 2
 * 
 * Return: sum of a and b
 * 
 */
int add(int a, int b)
{
    return (a + b);
}

/**
 * main - test function (entre point)
 * 
 * Return: 0 if scc
 */
int main(void)
{
    printf("%d", add(4, 3));
    return (0);
}