/*Question 5: Check whether the given positive number is a palindrome number or not 

Ex 
Input : 12 
Output : NO 

Input: 3223 
Output: YES*/

#include <stdio.h>

int main(void) {
    int num,n,rev=0,rem;
    printf("Enter the number...\n");
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        rev=(rev*10)+rem;
    }
    if(n==rev)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
	// your code goes here
	return 0;
}

