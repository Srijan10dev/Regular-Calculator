//Driver's Code for making an embedded calculator
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#define e 2.71
void add(double x);
void subs(double x);
void mul(double x);
void divi(double x);
void sq();
void srt();
void cube();
void crt();
void lg();
void ex();
void fac();
void mod();
struct calculator
{
    double val;
};
struct calculator s;
void main()
{
    int choice=0;
    double r=0.0;
    printf("Today's Date :\t%s \n",__DATE__);
    printf("Today's Time :\t%s \n",__TIME__);
    printf("Enter a number \n");
    scanf("%lf",&s.val);
    while(true)
    {
        printf("Enter 0 to exit from calculaotr \n");
        printf("1.\t Add\n");
        printf("2.\t Substract\n");
        printf("3.\t Multiply\n");
        printf("4.\t Divide\n");
        printf("5.\t Square\n");
        printf("6.\t Square Root\n");
        printf("7.\t Cube\n");
        printf("8.\t Cube root\n");
        printf("9.\t Natural Logarithim (base 10)\n");
        printf("10.\t Exponential power (e)\n");
        printf("11.\t Factorial of\n");
        printf("12.\t SINE of\n");
        printf("13.\t COSINE \n");
        printf("14.\t TANGENT\n");
        printf("15.\t Modulus \n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 0:
            exit(0);
            break;
            case 1:
            printf("Operand selected ! Enter a number. \n");
            scanf("%lf",&r);
            add(r);
            break;
            case 2:
            printf("Operand selected ! Enter a number. \n");
            scanf("%lf",&r);
            subs(r);
            break;
            case 3:
            printf("Operand selected ! Enter a number. \n");
            scanf("%lf",&r);
            mul(r);
            break;
            case 4:
            printf("Operand selected ! Enter a number. \n");
            scanf("%lf",&r);
            divi(r);
            break;
            case 5:
            sq();
            break;
            case 6:
            srt();
            break;
            case 7:
            cube();
            break;
            case 8:
            crt();
            break;
            case 9:
            lg();
            break;
            case 10:
            ex();
            break;
            case 11:
            fac();
            break;
            case 12:
            s.val=sin(s.val);
            printf("The result is : %lf \n",s.val);
            break;
            case 13:
            s.val=cos(s.val);
            printf("The result is : %lf \n",s.val);
            break;
            case 14:
            s.val=tan(s.val);
            printf("The result is : %lf \n",s.val);
            break;
            case 15:
            mod();
            break;

            default:
            printf("Invalid !");
            break;
        }
    }
}
void add(double x)
{
    s.val=s.val+x;
    printf("The result is : %lf \n",s.val);
}
void subs(double x)
{
    s.val=s.val-x;
    printf("The result is : %lf \n",s.val);
}
void mul(double x)
{
    s.val=s.val*x;
    printf("The result is : %lf \n",s.val);
}
void divi(double x)
{
    s.val=s.val/x;
    printf("The result is : %lf \n",s.val);
}
void sq()
{
    s.val=s.val*s.val;
    printf("The result is : %lf \n",s.val);
}
void srt()
{
    s.val=sqrt(s.val);
    printf("The result is : %lf \n",s.val);
}
void cube()
{
    s.val=s.val*s.val*s.val;
    printf("The result is : %lf \n",s.val);
}
void crt()
{
    s.val=cbrt(s.val);
    printf("The result is : %lf \n",s.val);
}
void lg()
{
    s.val=log10(s.val);
    printf("The result is : %lf \n",s.val);
}
void ex()
{
    s.val=exp(s.val);
    printf("The result is : %lf \n",s.val);
}
void fac()
{
    int f=1;
    for( int i=0;i<=s.val;i++)
    {
        f=f*i;
    }
    s.val=(double)f;
    printf("The result is : %lf \n",s.val);
}
void mod()
{
    if(s.val>=0)
    {
        printf("The result is : %lf \n",s.val);
    }
    else
    {
        s.val=(-1.0)*s.val;
        printf("The result is : %lf \n",s.val);
    }
}
//End of statement