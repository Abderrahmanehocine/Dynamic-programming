/*
	* Climbing stairs problem:
		- problem:  
			* Mark want to climb stairs from position 0 to n
		 	* He can climb only 1 or 2 stairs in one move
		- Solution: 
			* you need to count the number of posibilities that mark can climb the stairs until the number that the user enterd
	    
*/

#include <stdio.h>
#include <stdlib.h>

int climbing_stairs(int *stairs, int num){
    if(stairs[num] != 0 )
        return stairs[num];
    stairs[num] = climbing_stairs(stairs, num-1) + climbing_stairs(stairs, num-2);
    return stairs[num];
}

int main(){
    int *stairs = malloc(2 * sizeof(int));

    // Base cases
    stairs[0] = 1;
    stairs[1] = 1;

    int num;
    char add;

    again:
    printf("\nEnter the stair number: ");
    scanf("%d",&num);

    if(num >= 2){
        stairs = realloc(stairs, (num * sizeof(int))+1);
        if(stairs == NULL){
        	perror("memmory can't be allocated please try again\n");
            	exit(0);
        }
        printf("\nNumber of posibilities to climing the top is: %d\n", climbing_stairs(stairs,num));
    } 
    else{
        printf("\nNumber of posibilities to climing the top is: %d\n",stairs[num]);
    }
    printf("\nWant to try again[y/n]: ");
    scanf("%s",&add);
    if(add == 'y')
    	goto again;
    
    free(stairs);
    
    return 0;
}
