#include <stdio.h>
int main() {    

    int num, num1, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num, &num1);

    // calculating sum
    sum = num + num1;      
    
    printf("%d + %d = %d", num, num1, sum);
    return 0;
}