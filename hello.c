/*Voting Eligibility
Take age and citizenship.
A person can vote if age is 18 or above AND citizenship is 1.
Otherwise, print "Not Eligible".
*/
#include<stdio.h>
int main(){
    int age, citizenship ;
    
    printf("enter age");
    scanf("%d",&age);

    printf("enter citizenship");
    scanf("%d",&citizenship);

    if (age>=18 && citizenship==1){
        printf("eligible to vote");
    }
    else {
        printf("eligibe to not vote");
    }

}
