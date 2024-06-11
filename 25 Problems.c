
//Author: Nathaniel Mugenyi
//Date: 26th May, 2024
//Title: CS1101 - Assignment 2

#include <stdio.h>

//Problem 1

/*
int main(){

    int birth_year;
    const int current_year = 2024;

    printf("Enter your year of birth: ");
    scanf("%d",&birth_year);

    int age = current_year - birth_year;

    printf("You are %d years old",age);
}
*/

//Problem 2

/*
int main() {

    int numA;
    int numB;

    printf("Enter number A: ");
    scanf("%d",&numA);

    printf("Enter number B: ");
    scanf("%d",&numB);

    int SUM = numA + numB;
    int PRODUCT = numA * numB;

    printf("Sum of these numbers is %d and the product of these numbers is %d",SUM,PRODUCT);

}
*/

//Problem 3

/*
int main (){

    int N;

    printf("Enter a value ");
    scanf("%d",&N);

    int SQUARE = N*N;

    printf("Number is %d\nIts square is %d",N,SQUARE);
}*/


//Problem 4

/*
int main() {

    int numA;
    int numB;

    printf("Enter number A: ");
    scanf("%d",&numA);

    printf("Enter number B: ");
    scanf("%d",&numB);

    int SUM = numA + numB;
    int PRODUCT = numA * numB;

    printf("Sum of %d and %d is %d\n Product of %d and %d is %d", numA,numB,SUM,numA,numB,PRODUCT);

}
*/

//Problem 5

/*
int main (){

    int L;
    int B;

    printf("Enter length ");
    scanf("%d",&L);

    printf("Enter breadth ");
    scanf("%d",&B);

    int P = (2*L)+(2*B);
    int A = L*B;

    printf("Perimeter of Rectangle = %d\nArea of Rectangle = %d",P,A);

}*/

//Problem 6

/*
int main() {

    float c_tmp; //Celsius input
    float f_tmp; //Fahrenheit output

    printf("Enter Celsius Value ");
    scanf("%f",&c_tmp);


    f_tmp = (9 * c_tmp/5)+32; //conversion formula for Celsius to Fahrenhiet
    printf("Fahrenheit Value is %.1f \n ",f_tmp);

}*/


//Problem 7
/*
int main() {

    int R; //radius 
    int D;//diameter
    float A;//Area
    float C;//Circumference

    float pi = 3.142; //pi

    printf("Enter the Radius ");
    scanf("%d",&R);

    D = R*2;
    C = pi*D;
    A = 2*pi*(R*R);

    printf("\nDiameter = %d\nArea = %.2f\nCircumference = %.2f",D,A,C);

}*/

//Problem 8
/*
int main (){

    int H; //Height
    int B; //Base
    float A; //Area

    printf("Enter Height");
    scanf("%d", &H);

    printf("Enter Base");
    scanf("%d", &B);

    A = 0.5*B*H;

    printf("Area of Triangle = %.2f",A);

}
*/
//Problem 9
/*
int main (){

    float P; //Price
    float V = 17.22; //VAT
    float VP; // VAT Price 

    printf("Enter Price ");
    scanf("%f", &P);

    VP = P+V;

    printf("\n Vat is : %.2f\nVAT price is : %.2f", V,VP);
}
*/
//Problem 10
/*
#include <math.h>

int main (){

    int A; //side 1
    int B; //side 2
    float C; //hypotenuse 

    printf("Enter Side A ");
    scanf("%d",&A);

    printf("Enter Side B ");
    scanf("%d",&B);

    C = sqrt((A*A)+(B*B));

    printf("Hypotenuse = %.2f",C);
}
*/
//Problem 11
/*
int main (){

    int i_r;//initial reading
    int f_r;//final reading 

    printf("Enter initial reading: ");
    scanf("%d",&i_r);

    printf("Enter final reading: ");
    scanf("%d",&f_r);

    int Cons = f_r-i_r; //Consumtion
    float Cost = Cons * 1.5;//Cost

    printf("Consumption = %d\nCost        = Shs %.2f ",Cons,Cost);
}
*/

//Problem 12
/*
int main (){

    int i_km; //initial km
    int f_km; //final km
    int fuel; //Fuel in litres;

    printf("Enter initial km     : ");
    scanf("%d",&i_km);

    printf("Enter final km       : ");
    scanf("%d",&f_km);

    printf("Enter fuel in litres : ");
    scanf("%d",&fuel);

    int K = f_km-i_km;//Distance
    int C = K/fuel;//Consumption

    printf("Distance = %d km\nConsumption = %d km / litre",K,C);

}
*/

//Problem 13
/*
int main (){
    int M1;//Mass 1
    int M2;//Mass 2
    float G = 6.7e-11;
    float R = 2;//sqrt((6.7e-11*56*65)/6.097e-8)

    printf("Mass of M1(kg) : ");
    scanf("%d",&M1);

    printf("Mass of M2(kg) : ");
    scanf("%d",&M2);

    float Force = (G*M1*M2)/(R*R);

    printf("%.3E",Force);

     
}
*/

//Problem 14
/*
int main (){

    int P24 = 43000000;//Current Population
    float G = 0.123;// 12.3% growth rate

    int P25 = P24 + (P24*0.123); //2025 Poluation
    int P26 = P25 + (P25*0.123); //2026 Poluation
    int P27 = P26 + (P26*0.123); //2027 Poluation

    printf("Population Figures\n===================\n\n2025 = %d\n2026 = %d\n2027 = %d\n",P25,P26,P27);

    
}*/

//Problem 15
/*
int main (){

    int x1;
    int x2;
    int y1;
    int y2;

    printf("Enter 1st x-coordinate ");
    scanf("%d",&x1);
    printf("Enter 1st y-coordinate ");
    scanf("%d",&y1);

    printf("\nEnter 2nd x-coordinate ");
    scanf("%d",&x2);
    printf("Enter 2nd y-coordinate ");
    scanf("%d",&y2);

    float MX = (0.5*(x1+x2));//Midpoint at X
    float MY = (0.5*(y1+y2));//Midpoint at Y

    printf("Midpoint is at (%.1f ; %.1f)",MX,MY);

}*/

//Problem 16
/*
int main (){

    float x1;
    float x2;
    float y1;
    float y2;

    printf("Enter 1st x-coordinate ");
    scanf("%f",&x1);
    printf("Enter 1st y-coordinate ");
    scanf("%f",&y1);

    printf("\nEnter 2nd x-coordinate ");
    scanf("%f",&x2);
    printf("Enter 2nd y-coordinate ");
    scanf("%f",&y2);

    float G = (y2-y1)/(x2-x1);

    printf("Gradient is : %.1f", G);

}
*/

//Problem 17

/*
#include <math.h>

int main (){


    //int x = 5;
    int x = 3;

    float N = ((x*x*x*x)-(x*x*x)+(x*x)-x)/(((x+1)*(x+1))-sqrt(x));

    printf("N = %f",N);
}
*/

//Problem 18
/*
#include <math.h>

int main (){
    
    float X; //Mark
    float A; //orginal total 
    float B; // New Total

    printf("Enter Mark            : ");
    scanf("%f",&X);

    printf("Enter orginal total   : ");
    scanf("%f",&A);

    printf("Enter new             : ");
    scanf("%f",&B);

    float M = (X/A) * B;
    int M2 = round(M);

    printf("Converted Mark = %d",M2);
}
*/
//Problem 19

/*
#include <math.h>

int main (){

    float S;//distance in meters

    printf("Enter distance in meters : ");
    scanf("%f",&S);

    float V = sqrt(2*10*S);

    printf("\nSpeed in meters/sec : %.1f m/s",V);
}
*/

//Problem 20
/*
#include <math.h>

int main (){

    float x1;
    float x2;
    float y1;
    float y2;

    printf("Enter 1st x-coordinate ");
    scanf("%f",&x1);
    printf("Enter 1st y-coordinate ");
    scanf("%f",&y1);

    printf("\nEnter 2nd x-coordinate ");
    scanf("%f",&x2);
    printf("Enter 2nd y-coordinate ");
    scanf("%f",&y2);

    double Y = (y2-y1)*(y2-y1);
    double X = (x2-x1)*(x2-x1);
    
    float S = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));

    printf("Distance is : %.1f", S);

}*/

//Problem 21
/*
#include <math.h>

int main (){
    float a;
    float b;
    float c;


    printf("Enter value of a: ");
    scanf("%f",&a);
    printf("Enter value of b: ");
    scanf("%f",&b);
    printf("Enter value of c: ");
    scanf("%f",&c);

    
    float s1 = (-b+sqrt((b*b)-(4*a*c)))/(2*a);
    float s2 = (-b-sqrt((b*b)-(4*a*c)))/(2*a);

    printf("\n1st solution is: %.2f\n2nd solution is: %.2f", s2,s1);
}
*/
//Problem 22
/*
int main (){

    int S;//Seconds 
    int M = 0;// Minutes
    int H = 0;// Hours

    printf("Enter Value in Seconds ");
    scanf("%d",&S);

    if (S >= 60){

        M = S/60;
        S = S%60;
        

        if (M >= 60){

            H = M/60;
            M = M%60;
            
        }
    }



    printf("Hours = %d Minutes = %d Seconds = %d", H,M,S);
}
*/
//Problem 23
/*
int main (){

    int M;//Minutes
    int H = 0;// Hours
    int D = 0;// Days

    printf("Enter Value in Minutes ");
    scanf("%d", &M);

    if (M >= 60){

        H = M/60;
        M = M%60;
        

        if (H >= 24){

            D = H/24;
            H = H%60;
            
        }
    }



    printf("Days = %d Hours = %d Minutes = %d ", D,H,M);
}
*/
//Problem 24
/*
#include <math.h>

int main (){
       
    int P;// Pupils


    printf("Enter Number of Pupils ");
    scanf("%d", &P);

    int T = 

    printf("The school may have %d teachers", T);
}
*/
//Problem 25
/*
int main (){

    int num1;
    int num2;
    
    printf("Enter 1st Number ");
    scanf("%d", &num1);

    printf("Enter 2nd Number ");
    scanf("%d", &num2);

    int q = num2/num1;//quotient
    int r = num2%num1;//remainder

    printf("%d divides into %d %d times with a remainder of %d", num1,num2,q,r);

}
*/
