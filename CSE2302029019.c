#include<stdio.h>
void myinfo();
void problemlist();
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();
void problem11();
void problem12();
void problem13();
void problem14();
void problem15();
void problem16();
void problem17();
void problem18();
void problem19();
void problem20();
void problem21();
void problem22();
void problem23();
void problem24();
void problem25();
int a,b,c,d;
int main()
{
    int choice;
    problemlist();
    while(1)
    {
        printf("\nEnter your choice from 1 to 25: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 100:
            myinfo();
            break;
        case 1:
            problem1();
            break;
        case 2:
            problem2();
            break;
        case 3:
            problem3();
            break;
        case 4:
            problem4();
            break;
        case 5:
            problem5();
            break;
        case 6:
            problem6();
            break;
        case 7:
            problem7();
            break;
        case 9:
            problem9();
            break;
        case 10:
            problem10();
            break;
        case 11:
            problem11();
            break;
        case 12:
            problem12();
            break;
        case 13:
            problem13();
            break;
        case 14:
            problem14();
            break;
        case 15:
            problem15();
            break;
        case 16:
            problem16();
            break;
        case 17:
            problem17();
            break;
        case 18:
            problem18();
            break;
        case 19:
            problem19();
            break;
        case 20:
            problem20();
            break;
        case 21:
            problem21();
            break;
        case 22:
            problem22();
            break;
        case 23:
            problem23();
            break;
        case 24:
            problem24();
            break;
        case 25:
            problem25();
            break;
        case 0:
            exit(1);
            break;
        default:
            printf("Invalid Choice. Please Enter A Number Between 0 and 25.\n");
            break;
        }
    }
    return 0;
}

void myinfo()
{
    printf("||=======Personal - Info==========||\n");
    printf("||  NAME   : Rijoan Rashid Opar   ||\n");
    printf("||  ID     : CSE-2302029019       ||\n");
    printf("||  SECTION: 29A1, B.Sc in CSE    ||\n");
    printf("||  MOBILE : 018144482832         ||\n");
    printf("||           SONARGAON UNIVERSITY ||\n");
    printf("||================================||\n");
}
void problemlist()
{
    printf("100.About My Personal Information.\n");
    printf("1  .ADD Two Number.\n");
    printf("2  .Minus Two Number.\n");
    printf("3  .Multiply Two Number.\n");
    printf("4  .Divide Two Number.\n");
    printf("5  .ADD Three Number.\n");
    printf("6  .Multiply Three Number.\n");
    printf("7  .Minus Three Number.\n");
    printf("8  .Disply 1 to 10 Using For Loop.\n");
    printf("9  .Display 1 to 50 Using Do-While Loop.\n");
    printf("10 .Display Even Number from 1 to 20 While Loop.\n");
    printf("11 .Display Even Number from 1 to 50 Do-While Loop.\n");
    printf("13 .Display ODD Number From 1 to 25 Using For Loop.\n");
    printf("14 .Display Greatest Between Two Number.\n");
    printf("15 .Display Greatest Between Three Number using Ternary operator.\n");
    printf("16 .Display Lowest Between Two Number using if-else statement..\n");
    printf("17 .Display Lowest Number amoung 3 using if-else statement.\n");
    printf("18 .Display ODD or Even Number.\n");
    printf("19 .Display 5 Array Number.\n");
    printf("20 .Display 7 Array Number with Summetion and Greatest value.\n");
    printf("21 .Display a Multiplication Table from user.\n");
    printf("22 .Display Gender Role.\n");
    printf("23 .Display Your Name & Count Character In Your Name.\n");
    printf("24 .Display 7 days week name.\n");
    printf("25 .Calculate Tri-angle Area.\n");
    printf("0  .For Exit The Program.\n");

    printf("\n");
}
void problem1()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    printf("%d+%d = %d\n",a,b,a+b);
}
void problem2()
{
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    printf("%d-%d = %d\n",a,b,a-b);
}
void problem3()
{
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    printf("%d X %d = %d\n",a,b,a*b);

}
void problem4()
{
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    printf("%d by %d = %d\n",a,b,a/b);
}
void problem5()
{
    printf("Enter three number: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d+%d+%d = %d\n",a,b,c,c+a+b);
}
void problem6()
{
    printf("Enter three number: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d X %d X %d = %d\n",a,b,c,c*a*b);
}
void problem7()
{
    printf("Enter three number: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d - %d - %d = %d\n",a,b,c,a-b-c);
}
void problem8()
{
    for(a=1; a<=10; a++)
    {
        printf("%d\t",a);
    }
}
void problem9()
{
    int a=1;
    do
    {
        printf("%d\t",a);
        a++;
    }
    while(a<=50);
}
void problem10()
{
    int a=2;
    while(a<=20 )
    {
        printf("%d\t",a);
        a=a+2;
    }
}
void problem11()
{
    int a=2;
    do
    {
        printf("%d\t",a);
        a=a+2;
    }
    while(a<=50);
}
void problem12()
{
    for(a=1; a<=25; a=a+2)
    {
        printf("%d\t",a);
    }
}
void problem13()
{
    for(a=1; a<=100; a=a+2)
    {
        printf("%d\t",a);
    }
}
void problem14()
{
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    c=(a>b)?a:b;
    printf("%d is the greatest",c);
}
void problem15()
{
    printf("Enter three number: ");
    scanf("%d %d %d",&a,&b,&c);
    c=(a>b)&&(a>c)?a:
      (b>c)?b:c;
    printf("%d is the greatest",c);
}

void problem16()
{
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    if(a<b)
        printf("%d is is lowest number\n",a);
    else
        printf("%d is is lowest number\n",b);


}
void problem17()
{
    printf("Enter three number: ");
    scanf("%d %d %d",&a,&b,&c);
    if((a<b) && (a<c))
    {
        printf("%d is is lowest number\n",a);
    }
    else if(b<c)
    {
        printf("%d is is lowest number\n",b);
    }
    else
    {
        printf("%d is the lowtest number",c);
    }

}
void problem18()
{
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a%2==0)
        printf("%d is is EVEN number\n",a);
    else if(a%2==1)
        printf("%d is is ODD number\n",a);
    else
        printf("%d is is  ZERO\n",a);
}
void problem19()
{
    int a[5],i;
    printf("Enter 5 Array NUmber: ");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Here is Your Array Number: ");
    for(i=0; i<5; i++)
    {
        printf("a[%d]=%d\t\t",i,a[i]);
    }
}
void problem20()
{
    int a[7],i,s,max=0;
    printf("Enter Your 7 Array NUmber: ");
    for(i=0; i<7; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Here is Your 7 Array Number:\n");
    for(i=0; i<7; i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
        s=s+a[i];
        if(max<a[i])
            max=a[i];
    }
    printf("%d is the biggest array\n",max);
    printf("SUMMETION:%d\n",s);

}
void problem21()
{
    int a,i;
    printf("Enter Your Number for Multiplication table: ");
    scanf("%d",&a);
    for(i=1; i<=10; i++)
    {
        printf("%d X %d= %d\n",i,a,i*a);
    }
}
void problem22 ()
{
    char gender;
    while(1)
    {
        printf("Enter Your Gender W or F and 0 to Exit: ");
        scanf(" %c",&gender);
        switch(gender)
        {
        case 'm':
        case 'M':
            printf("Male\n");
            break;
        case 'w':
        case 'W':
            printf("Female\n");
            break;
        case 0:
            exit(1);
            break;
        default:
            printf("unspecified Gender\n");
            break;
        }
    }
}
void problem23()
{
    char name[50];
    printf("Enter Your Name: ");
    scanf("%s",name);
    printf("Hello! %s\n",name);
    int i=0,counter=0;
    while(1)
    {
        printf("%d - %c\n",i,name[i]);
        if(name[i]=='\0')
        {
            break;
        }
        i++;
        counter++;
    }
    printf("String Length = %d\n",counter);
}

void problem24()
{
    while(1)
    {
        printf("Enter Your day Number 0 to Exit The Program:");
        scanf("%d",&a);
        switch(a)
        {
        case 0:
            exit(1);
            break;
        case 1:
            printf("Saturday\n");
            break;
        case 2:
            printf("Sunday\n");
            break;
        case 3:
            printf("Monday\n");
            break;
        case 4:
            printf("Tuesday\n");
            break;
        case 5:
            printf("Wednesday\n");
            break;
        case 6:
            printf("Thursday\n");
            break;
        case 7:
            printf("Friday\n");
            break;
        default:
            printf("Undefined\n");
            break;
        }
    }
}
void problem25()
{
    float h,b;
    printf("Enter Your Tri-angle Height & base: ");
    scanf("%f %f",&h,&b);
    printf("Triangle area is=%0.2f sq. meter",0.5*h*b);

}

