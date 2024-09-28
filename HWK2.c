#include<stdio.h>
#include<math.h>
int main(){
// //question 1
// {
//     float r,V;
//     printf("q1\tR=?\n");
//     scanf("%f",&r);
//     V=4/3*3.141593*pow(r,3);
//     printf("V=%.2f\n",V);
// }
// //question 2
// {
//     float R1,R2,R;
//     printf("q2\tR1=?,R2=?\n");
//     scanf("%f,%f",&R1,&R2);
//     R=1/(1/R1+1/R2);
//     printf("R=%.2f\n",R);
// }  
// //question 3
// {
//     int x,y;
//     printf("q3\tx=?\n");
//     scanf("%d",&x);
//     y=pow(x,5)+pow(x,3)+6;
//     printf("y=%d\n",y);
// }
// //question 4
// {
//     long double m1,m2,r,F;
//     printf("q4\tm1=?,m2=?,r=?\n");
//     const double G=6.67e10-11;
//     scanf("%lf,%lf,%lf",&m1,&m2,&r);
//     F=G*m1*m2/(r*r);
//     printf("gravity=%le\n",F);
// }
// //question 5
// {
//     float x,y;
//     printf("q5\tx=?\n");
//     scanf("%f",&x);
//     y=sin(x)/x+fabs(cos(3.14*x/2));
//     printf("y=%f\n",y);
// }
// //question 6
// {
//     int a=16,jud;
//     if(a>0&&a<10){
//         jud=1;
//     }
//     else{
//         jud=0;
//     }
//     printf("q6\tjud=%d\n",jud);
// }
// //question 7
// {
//     int x=1,y=3,jud;
//     if("(x==1&&y==2)||(x!=1&&y!=2)") jud=0;
//     else jud=1;
//     printf("q7\tjud=%d\n",jud);
// }
//question8

//Q1
{
int m,n;
printf("m=?n=?\n");
scanf("%d %d",&m,&n);
printf("%d %d %d %f %d\n",m+n,m-n,m*n,1.0*m/n,m%n);
}
//Q2
{
    int a,b,c,d;
    printf("a=?b=?c=?\n");
    scanf("%d,%d,%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d<0) printf("no answer\n");
    else{
        float x1,x2;
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("x1=%.3f,x2=%.3f",x1,x2);
    }
}
return 0;
}
