#include "solution.h"
#include <assert.h>
#include <stdio.h>

int main()
{
    int count = 0;
    assert(stringStat("test", 5, &count) == 4 * 5);
    assert(count == 1);

    printf("Success!\n");
    return 0;
}
