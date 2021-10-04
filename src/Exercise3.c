/*
3.	Write a program to find all prime number less than a given integer N 
(optional: provide an optimal solution)
Ex:
 ____________________________________
| Input: 10                          |
| Output: 2 3 5 7                    |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isGreaterThan2(int x)
{
	if(x<2){
		return 0;
	}
	
    return 1;
	
}
int main(int argc, char *argv[]){
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	//Your codes here
	while (testcase!=0)
	{
		for(int so=0;so<testcase;so++){
			if(isGreaterThan2(so)==1){

				int count = 0;
				for(int i = 2; i <= sqrt(so); i++){
					if(so % i == 0){
						count++;
					}
				}
				if(count == 0){
					printf("\n%d",so);
				}
			
			}
			
			

		}
		return 0;
	
		
	}
	return 0;
	
}


