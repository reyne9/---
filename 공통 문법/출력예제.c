int main() {
    int num = 42;
    char ch = 'A';
    float fnum = 3.14;
    double dnum = 2.71828;

    printf("Integer: %d\n", num);
    printf("Character: %c\n", ch);
    printf("Float: %.2f\n", fnum);
    printf("Double: %.5f\n", dnum);
    printf("Float: %.2f\nDouble: %.5lf", fnum, dnum);
    // f는 float, lf는 double을 의미합니다.
    printf("Combined: %d, %c, %.2f, %.5f\n", num, ch, fnum, dnum);
    
}