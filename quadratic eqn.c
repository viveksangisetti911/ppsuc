#include<math.h>
#include<stdio.h>
int main()
{
 double a,b,c,d,root1,root2,realPart,imgPart;
 printf("enter coefficients a, b and c: ");
 scanf("%lf %lf %lf", &a, &b, &c);
 d=b * b - 4 * a * c;
 if (d>0)
 {
  root1 = (-b + sqrt(d)) / (2 * a);
  root2 = (-b - sqrt(d)) / (2 * a);
  printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
 }
 else if (d == 0)
 {
  root1 = root2 = -b / (2 * a);
  imgPart=sqrt(-d) /(2 * a);
  printf("root1 = %.21f+%.21fi and root2 = %.2f-%.2fi",realPart,imgPart);
}
return 0;
}
