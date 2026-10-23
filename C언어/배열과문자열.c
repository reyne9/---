#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!"; // 문자열 선언
    char arr[] = {'A', 'B', 'C', 'D', 'E','\0'}; // 문자 배열 선언
    
    printf("String: %s\n", str);
    printf("Arrray(Pointer Arithmetic):");
    char *ptr = arr;
    while (*ptr != '\0') {
        printf(" %c", *ptr);
        ptr++;
    }
    printf("\n");
    printf("Array(Using Indexing):");
    
    
    
    return 0;
}