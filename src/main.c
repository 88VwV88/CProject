#include <stdio.h>


void hello(const char*);

void foo(int bar(int, int), int a, int b) {
    printf("result: %d\n", bar(a, b));
}
int mul(int a, int b) {
    return a*b;
}
int div(int a, int b) {
    return a/b;
}
int add(int a, int b) {
    return a+b;
}

int main() {
    foo(add, 1, 2);
    foo(mul, 2, 3);
    foo(div, 10, 2);
    hello("foo");
    return 0;
}

void hello(const char* name) {
    printf("Hello, %s!\n", name);
}