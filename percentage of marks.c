#include<stdio.h>
#include<math.h>
int main()
{
    float average,percentage,sum;
    float physics,chemistry,maths,cs,english;
    printf("\nEnter the 5 subject marks\n");
    printf("\nEnetr the PHYSICS marks:");//asking the user to enter the physics marks....
    scanf("%f",&physics);
    printf("\nEnter the CHEMISTRY marks:");//asking the user to enter the chemistry marks....
    scanf("%f",&chemistry);
    printf("\nEnetr the MATHS marks:");//asking the user to enter the maths marks....
    scanf("%f",&maths);
    printf("\nEnter the COMPUTER SCIENCE marks:");//asking the user to enter the computer science marks....
    scanf("%f",&cs);
    printf("\nEnter the ENGLISH marks:");//asking the user to enter the english marks....
    scanf("%f",&english);
    sum=(physics+chemistry+maths+cs+english);//calculating the sumation of the marks....
    average=sum/5;//calculating the average of the marks....
    percentage=(sum/500)*100;//calculating the percentage of marks....
    printf("\nThe TOTAL marks you obtained is:%.2f\n",sum);
    printf("\nThe AVERAGE of your marks are:%.2f\n",average);
    printf("\nThe PERCENTAGE of your marks are:%.2f\n",percentage);
    return 0;
}