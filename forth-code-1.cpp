#include <iostream>
#include <time.h>
using namespace std;
 


int main(){
     srand(time(NULL));

    bool shouldContinue = true;
    printf("%s","welcome to my game! guess number between 0 to 100!\n");
    int randomNum  = rand()%100 + 1;
    do{
        printf("enter your guess: ");
        int inputNum = -1;
        scanf("%d",&inputNum);
        if(inputNum<0 || inputNum >100){
            printf("please enter a number in 0 to 100!\n");
        }else{
            if(randomNum> inputNum){
                printf("The number is greater!\n");
            }else if (randomNum< inputNum){
                printf("The number is smaller!\n");
            }else{
                printf("WOW! Correct answer!\n");
                printf("do you want to play again?(y/n)");
                char ans='y';
                scanf(" %c",&ans);
                if(ans == 'y'){
                randomNum  = rand()%100 + 1;
                }else{
                shouldContinue = false;
                }
            }
        }

    }while(shouldContinue);

    printf("\nThank you for playing!");



    return 0;
}
