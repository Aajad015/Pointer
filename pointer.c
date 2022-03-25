#include <stdio.h>
int main() {
    int a=10,*p,**q;
    p=&a;
    q=&p;
    printf("%d\n",a);// ---> 10
    printf("%d\n",p);// ---> Address of a
    printf("%d\n",&a);// ---> Address of a
    printf("%d\n",*p);// value of a
    printf("%d\n",&p);// Address of p
    printf("%d\n",q);// Address of p
    printf("%d\n",*q);// value of p
    printf("%d\n",**q);// value of a
    printf("%d\n",&q);// value of q
    return 0;
}