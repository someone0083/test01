#include <stdio.h>

int add_foo(int x, int y){

   return (x + y);
}

//Test v2

int sub_foo(int x, int y){

   return (x - y);
}

int mul_foo(int x ,int y){

   return (x * y);
}
//this is first stash
int main(int argc, char *argv[]){

    printf("Hello! World, 2 + 3 = %d, 2 - 3 =%d.\n", add_foo(2,3),sub_foo(2, 3));

    return 0;
}

//Amend, after change
//From Windows

