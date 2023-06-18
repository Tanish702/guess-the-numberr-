#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,attempts=1;
    srand(time(0));
    number=rand()%10+1;// we devide number by 10 so that the value stayes between 0 to 10
    printf("the number is %d\n",number);

    do
    {
        printf("gusse the number between 1 to 10\n");
        scanf("%d",&guess);

        if(guess>number){
            printf("enter smaller number\n");
        }
        else if(guess<number){
            printf("enter larger number\n");
        }
        else{
            printf("you take %d attempts to guess the number\n",attempts);
        }
        attempts++;
    } while (guess!=number);
    return 0;

}