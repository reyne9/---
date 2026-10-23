#include <stdio.h>


int main() {
    int result = 42;
    print("%d\n", result);
    printf("%d\n", &result); // 변수가 있는 메모리 주소 
    return 0;
}