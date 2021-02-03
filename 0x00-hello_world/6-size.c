#include<stdio.h>
int main() 
{
    int intType;
    float floatType;
    long long int lng;
    long int lngint;

    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of long int: %zu bytes\n", sizeof(lngint);
    printf("Size of long long int: %zu bytes\n", sizeof(lng));
    printf("Size of float: %zu byte\n", sizeof(floatType));
    
    return 0;
}
