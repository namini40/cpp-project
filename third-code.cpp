#include <iostream>
#include <cmath>
#include <string>


using namespace std;

int main()
{

    //------------------------------ math ----------------------------------
    int x = 2;
    int y = 15;
    int z = 15;
    printf("max: %d",max(x,y));
    printf("\nmin: %d",min(x,y));
    float squareRootZ = sqrt(z);
    printf("\nsqrt(%d): %f",z,squareRootZ);

    printf("\nround(%f): %f",squareRootZ,round(squareRootZ));
    printf("\nfloor(%f): %f",squareRootZ,floor(squareRootZ));
    printf("\nlog(%d): %f",x,log(x));
    printf("\n %d^%d: %f",2,5,pow(2,5));
    
    // p = x*sin(X) + x^2*sin^2(x) + ...
    int term = 5;
    x = 2;
    float sumOfAll = 0.0;
    for(int i=1;i<term;i++){
        sumOfAll = sumOfAll + pow(x,i)*pow(sin(x),i);
    }
    printf("%f",sumOfAll);



    //------------------------------ string ----------------------------------

    // char variable
    char ali = 'X';
    printf("%c",ali);

    // string variable
    string firstName = "ali";
    string lastName = "kiafar";
    string flname = firstName +" "+ lastName;
    cout << flname;
    cout<< flname.size();
    cout<< firstName[2];

    // example of using string and numbers
    string mynumber = "8236528500321";
    int sumOfDigits = 0;
    for(int i=0; i<mynumber.length();i++){
        int num;
        switch (mynumber[i])
        {
        case '0':
            num=0;
            break;
        case '1':
            num=1;
            break;
        case '2':
            num=2;
            break;
        case '3':
            num=3;
            break;
        case '4':
            num=4;
            break;
        case '5':
            num=5;
            break;
        case '6':
            num=6;
            break;
        case '7':
            num=7;
            break;
        case '8':
            num=8;
            break;
        case '9':
            num=9;
            break;
        default:
            break;
        }

        sumOfDigits = sumOfDigits + num;
       
    }

    printf("\nsum of digits of %s is: %d",mynumber.c_str(),sumOfDigits);


    //------------------------------ array ----------------------------------


    // define array 
    float weights[5]= { 87.4, 105.1, 77.6, 92.0, 101.3}; 

    // how many elements are there in the array
    int sizeOfWeightArray = sizeof(weights)/sizeof(*weights);

    // show elements
    printf("show Weight Array:\n");
    for(int i=0;i<sizeOfWeightArray;i++){
        printf("%f\n",weights[i]);
    }

    // caculating average of weights
    float averageOfWeights;
    float sum=0;
    for(int i=0;i<sizeOfWeightArray;i++){
        sum=sum+weights[i];
    }
    averageOfWeights = sum/(float)sizeOfWeightArray;
    printf("average of weights is: %f\n",averageOfWeights);

    // define an array in another way
    float heights[] = {1.97,1.56,1.30,1.66,1.87,2.02,2.11};
    // how many elements are there in the array
    int sizeOfHeightArray = sizeof(heights)/sizeof(*heights);

    // show elements
    printf("show Height Array:\n");
    for(int i=0;i<sizeOfHeightArray;i++){
        printf("%f\n",heights[i]);
    }


    //------------------------------ random ----------------------------------

    // random integers
    printf("5 random integers:\n");
    for(int i=0;i<5;i++){
    printf("%d\n",rand());
    }

    // // random floats
    printf("5 random floats:\n");
    for(int i=0;i<5;i++){
    printf("%f\n",(float)rand()/(float)RAND_MAX);
    }

    // random dice
    for(int i=0;i<1000;i++){
        // from 0 to 6 (6 is not included)
        int range = 6;
        // plus 1 to shift the range: 1 to 6
        int dice = rand() % range + 1;
        printf("%d\n",dice);
    }

}
   
