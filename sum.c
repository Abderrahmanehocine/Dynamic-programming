/*
    * Problem:  * we want to count the sum of numbers until number n
                * n will be the input by the user
                * n = [0,1000]
                
    * Example:  * n = 5
                * The program will count 1+2+3+4+5 and print the sum depand on the number n
                
    * Solution: * The function sum() will return the sum of the numbers untill number n
                * The function sum() must use the dynamic programmig technique to solve the problem
                * In the solution below I use memoization to avoid the repatation so the time complexity will optimize in every input
                
    * If you have any question contact me: hocineabderrahmane@duck.com
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
