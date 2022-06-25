#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define note "Please Enter the Valid Operation"
#define PI 3.14159265
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();
void logarithm();
void log_base_10();
void sine();
void cosine();
void tangent();
void sineh();
void cosineh();
void tangenth();

int main(){
    printf("\t\tWelcome to the scientific calculator!!\n\n");
    int choice;
    printf("\n******* Press 0 to quit the program ********\n");
    printf("Enter 1 for Addition \n");
    printf("Enter 2 for Subtraction \n");
    printf("Enter 3 for Multiplication \n");
    printf("Enter 4 for Division \n");
    printf("Enter 5 for Modulus \n");
    printf("Enter 6 for Power \n");
    printf("Enter 7 for Factorial \n");
    printf("Enter 8  for Square \n");
    printf("Enter 9  for Cube \n");
    printf("Enter 10 for Squareroot \n"); 
    printf("Enter 11 for Logarithm \n");
    printf("Enter 12 for Log_base_10 \n");
    printf("Enter 13 for Sine \n");
    printf("Enter 14 for Cosine \n");
    printf("Enter 15 for Tangent \n");
    printf("Enter 16 for Sineh \n");
    printf("Enter 17 for Cosineh \n");
    printf("Enter 18 for Tangenth \n\n");
    
    while(1){    
    printf("\n\nEnter the operation you want to do: ");
    
    scanf("%d",&choice);
            
    switch(choice)
    {
                case 1:
                    addition();
                    break;
                case 2:
                    subtraction();
                    break;
                case 3:
                    multiplication();
                    break;
                case 4:
                    division();
                    break;
                case 5:
                    modulus();
                    break;
                case 6:
                    power();
                    break;
                case 7:
                    factorial();
                    break;
                case 8:
                    square();
                    break;
                case 9:
                    cube();
                    break;
                case 10:
                    squareroot();
                    break;
                case 11:
                    logarithm();
                    break;
                case 12:
                    log_base_10();
                    break;
                case 13:
                    sine();
                    break;
                case 14:
                    cosine();
                    break;
                case 15:
                    tangent();
                    break;
                case 16:
                    sineh();
                    break;
                case 17:
                    cosineh();
                    break;
                case 18:
                    tangenth();
                    break;
                case 0:
                    exit(0);
                default:
                    printf("\n********** %s ***********\n",note);
        }
    
    }
    return 0;
}

void addition(){
    printf("Enter the numbers you want to add: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The sum of %d and %d is %d\n",a,b,a+b);
}
void subtraction(){
    printf("Enter the numbers you want to subtract: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The subtraction of %d and %d is %d\n",a,b,a-b);
}
void multiplication(){
    printf("Enter the numbers you want to multiply: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The multiplication of %d and %d is %d\n",a,b,a*b);
}
void division(){
    printf("Enter the numbers you want to divide: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The division of %d and %d is %f\n",a,b,(float)a/(float)b);
}
void modulus(){
    printf("Enter the numbers you want to find modulus of: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The modulus of %d and %d is %d\n",a,b,a%b);
}
void factorial(){
    int n,factorial;
    printf("Enter the number you want the factorial of: ");
    scanf("%d",&n);
    factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i; // factorial*=i;
    }
    printf("\nFactorial of %d is %d",n,factorial);
}
void power(){
    double b;
    double p;
    printf("Enter the base and the power: ");
    scanf("%lf%lf",&b,&p);
    double e=pow(b,p);
    printf("The power is %lf",e);
}
void square(){
    double b;
    printf("Enter the number you want the square of: ");
    scanf("%lf",&b);
    double p=pow(b,2);
    printf("The square of %lf is %lf",b,p);
}
void cube(){
    double b;
    printf("Enter the number you want the cube of: ");
    scanf("%lf",&b);
    double p=pow(b,3);
    printf("The cube of %lf is %lf",b,p);
}
void squareroot(){
    double b;
    printf("Enter the number you want the square root of : ");
    scanf("%lf",&b);
    double s = sqrt(b);
    printf("The square root of %lf is %lf",b,s);
}
void logarithm(){
    double b;
    printf("Enter the number you want the natural logarithm (base = e) of : ");
    scanf("%lf", &b);
    double l = log(b);
    printf("The natural log of %lf is %lf\n",b,l);
}
void log_base_10(){
    double b;
    printf("Enter the number you want the log base 10 of : ");
    scanf("%lf",&b);
    double l = log10(b);
    printf("The logarithm base 10 of %lf is %lf\n",b,l);
}
void sine(){
    double b;
    printf("Enter the number you want the sine of : ");
    scanf("%lf",b);
    double s = sin (b*PI/180);
    printf("The sine of %lf is %lf\n",b,s);
}
void cosine(){
    double b;
    printf("Enter the number you want the cosine of : ");
    scanf("%lf",b);
    double c = cos (b*PI/180);
    printf("The cosine of %lf is %lf\n",b,c);
}
void tangent(){
    double b;
    printf("Enter the number you want the tangent of : ");
    scanf("%lf",b);
    double t = tan (b*PI/180);
    printf("The tangent of %lf is %lf\n",b,t);
}
void sineh(){
    double b;
    printf("Enter the number you want the sineh of : ");
    scanf("%lf",b);
    double s = sinh(b);
    printf("The sineh of %lf is %lf\n",b,s);
}
void cosineh(){
    double b;
    printf("Enter the number you want the cosineh of : ");
    scanf("%lf",b);
    double c = cosh(b);
    printf("The cosineh of %lf is %lf\n",b,c);
}
void tangenth(){
    double b;
    printf("Enter the number you want the tangenth of : ");
    scanf("%lf",b);
    double t = tanh(b);
    printf("The tangenth of %lf is %lf\n",b,t);
}
