//
//  main.c
//  test03
//
//  Created by 20161104569 on 17/6/19.
//  Copyright © 2017年 20161104569. All rights reserved.
//

#include<stdio.h>
int main()
{
    int i,sum;
    sum=0;
    for(i=2;i<=100;i＝i+2)
    {
        sum=sum+i;
    }
    
    printf("2+4+6+....+100=%d",sum);
    return 0;
}
