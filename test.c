#include <stdio.h>

int test(int a)
{
    return 5;
}

int main()
{
    int a = 0;
    
    if((a = test(a)) > 5) {
        printf("%d\n",a);
    }
    printf("%d\n",a);

    return 0;
}

