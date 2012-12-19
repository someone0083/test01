#include <stdio.h>

int add_foo(int x, int y){

   return (x + y);
}

int main(int argc, char *argv[]){

    printf("Hello! World, 2 + 3 is %d.\n", add_foo(2,3));

    return 0;
}

