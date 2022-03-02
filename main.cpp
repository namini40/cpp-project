#include <iostream>

using namespace std;

int main()
{
    int a, b, c, valume;
    a=2;
    b=3;
    c=b;
    valume = a*b*c;
    printf("V: %d",valume);

    // parameter
    for(int n=0;n<100;n = n+1){
        //body
        printf("%d\n",n);
    }

    int n = 0;
    while(n<100){
        //body
        printf("%d\n",n);
        n++;
    }
    
    int age = 20;
    string result;
    if (age<=16){
        printf("Child");
    }else if(age>=17 && age<=30){
        printf("Young Adults");
    }else if(age>=31 && age<=45){
        printf("MA Adults");
    }else{
        printf("Old");
    }

    int age = 20;
    string result;
    if (age<=16){
        result = "Child";
    }else if(age>=17 && age<=30){
        result = "Young Adults";
    }else if(age>=31 && age<=45){
        result = "MA Adults";
    }else{
        result = "Old";
    }
    printf("%s" ,result);

    // ASCI

    int numberOfLines = 50;

    for(int i=1;i<=numberOfLines;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
        
    }

}
   
