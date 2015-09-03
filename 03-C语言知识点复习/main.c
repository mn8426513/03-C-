//
//  main.c
//  03-C语言知识点复习
//
//  Created by Mac on 14-8-28.
//  Copyright (c) 2014年 MN&WC. All rights reserved.
//

#include <stdio.h>
#include "two.h"

//extern void one();

//static int a;
int mul(int a ,int b){
    return (a*b);
}

int add(int a , int b){
    
    return a+b;
}


int count(int a, int b, int (*p)(int,int)){
     return p(a,b);
    
  
    
}


#pragma mark 返回指针的函数


#pragma mark 字符串处理函数

void string(){
    
    
    char s[10] = "asdfkjajskdf";
   
    int len = strlen("我是一个人");
   
    strcpy(s,"itcast");
    
    printf("%s",s);
    
    char ss[10] ="abcdda";
     strcat(ss,"ios");
    
    printf("%s",ss);
    
    strcmp("abc","abc");


}

int main(int argc, const char * argv[]) {


//    a = 8;
//    
//    printf("a = %d\n",a);
//    
//    one();
//    
//    two();
    int result = count(1,6,mul);
    
    printf ("%d\n", result);
    
    string();
    
    
   
    return 0;
}


//    void one(){
//
//    printf("my name is %s , my age is %-4d , height is %5.2f,sex is %c\n","毛宁",22,1.58f,'A');
//
//    a = 4;
//    
//    printf("%d\n",a);
//
// }