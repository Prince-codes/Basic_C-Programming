// wap to find lcm of two numbers

//  no arguments no return value
#include<stdio.h>

void lcm();
void main()
{
    lcm();
}
void lcm()
{
    int n1,n2,m;
    printf("enter two numbers");
    scanf("%d %d",&n1,&n2);
    if (n1<n2)
       m=n1;
    else 
      m=n2;
    while ((m%n1!=0) ||  (m%n2!=0))
        m++;
    printf("lcm %d",m);
}

//  arguments return value

/*#include<stdio.h>

int lcm(int,int,int);
void main()
{
    int n1,n2,m,p;
    printf("enter two numbers");
    scanf("%d %d",&n1,&n2);
    if (n1<n2)
       m=n1;
    else 
      m=n2;
    p=lcm(m,n1,n2);
    printf("lcm %d",p);
}
int lcm(int m,int n1,int n2)
{
    while ((m%n1!=0) ||  (m%n2!=0))
        m++;
    return m; 
}*/