#include <stdio.h>
#include <stdlib.h>
#include "develop.h"

extern int max(int x, int y);
int main(int argc, char const *argv[])
{
    printf("hello world\n");
    printf("a + b = %d\n", add(100, 200));
    system("pause");
    return 0;
}
