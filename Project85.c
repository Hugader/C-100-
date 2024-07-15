/*
题目：判断一个素数能被几个9整除。

程序分析：丫的！这题目的意思是判断一个素数能整除几个9组成的数吧？我就这么理解吧。素数是不 能被除1和自身之外的数整除的

*/

#include <stdio.h>

int main()
{
    int p, i; 
    long int sum = 9;

    printf("请输入一个素数:\n");
    scanf("%d",&p);

    for(i = 1;; i++)
    {
        if(sum % p == 0)
            break;
        else
            sum = sum * 10 + 9;
    }

    printf("素数%d能被%d个9组成的数%ld整除\n", p, i, sum);

    return 0;
}


