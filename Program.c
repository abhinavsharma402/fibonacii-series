#include<stdio.h>
int fibonacci(int);

int main(void)
{    
    int n;
    scanf("%d", &n);       

    for(int i = 0; i < terms; i++)
    {
        printf("%d ", fibonacci(i));
    }
    return 0;
}

int fibonacci(int num)
{    
    if(num == 0 || num == 1) {
        return num;
    }
    return fibonacci(num-1) + fibonacci(num-2);
}
