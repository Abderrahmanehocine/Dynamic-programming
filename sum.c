/*
    * Problem:  * we want to count the sum of numbers until number n
                * n will be the input by the user
                * n = [0,1000]
    * Solution: * The function sum() will return the sum of the numbers untill number n
                * the function sum() must use the dynamic programmig technique to solve the problem
*/

#include <stdio.h>

int sum(int *numbers, int n){
    if(numbers[n] != 0)
        return numbers[n];
    if(numbers[n-1] == 0)
        numbers[n-1] = sum(numbers, n-1);
    return numbers[n-1] + n;
}

int main(){
    int numbers[1000] = {0,1};
    int n;
    again:
    printf("\nEnter the number: ");
    scanf("%d",&n);
    if(n < 0 || n > 1000){
        printf("please enter another number\n\n");
        goto again;
    }
    if(n <= 1)
        printf("The sum is: %d\n",n);
    else
        numbers[n] = sum(numbers, n);
    printf("The sum is: %d\n", numbers[n]);
    char YorN;
    printf("\nYou want to add another numbers[y/n]: ");
    scanf("%s",&YorN);
    if(YorN == 'y')
        goto again;
    return 0;
}