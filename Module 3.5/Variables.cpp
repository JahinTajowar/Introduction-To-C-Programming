/*
https://www.hackerrank.com/contests/module-3-5-practice-a-introduction-to-c-programming-a-batch-04/challenges/variables-6-4
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    long long int b;
    double c;
    char d;
    scanf("%d %lld %lf %c",&a,&b,&c,&d);
    printf("%d\n%lld\n%.2lf\n%c\n",a,b,c,d);
    return 0;
}