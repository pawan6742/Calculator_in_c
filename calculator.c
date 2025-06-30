#include <float.h>
#include <stdio.h>

int main (void) {

char op ;
double a,b, res;
printf ("Welcome to my calculator\nMade by Pawan Gore\n");
printf ("enter the operator(+ , - , * , / )");
scanf ("%c",&op);

printf ("enter the valew:-");
scanf (" %lf %lf",&a,&b);

if (op == '+')
    res = a+b;
 else if (op == '-')
    res = a-b;
 else if ( op == '*' )
    res = a*b;
    else if ( op == '/')
    res = a/b;


else{
printf ("yout equation is not posibal");
res = -DBL_MAX;
}
 if (res != -DBL_MAX)
        printf("Result: %.2lf\n", res);
        

return 0;




}
