#include <stdio.h>

int main()
{
// classificar 5 números na ordem crescente > decrecente.
//                              decrencente < crescente.
    int a, b, c, d, e, x;

    printf("Enter frist number:");
    scanf("%d", &a);

    printf("Enter second number:");
    scanf("%d", &b);

    printf("Enter third  number:");
    scanf("%d", &c);

    printf("Enter four number:");
    scanf("%d", &d);

    printf("Enter five number:");
    scanf("%d", &e);

    printf("\n\nBefore %d %d %d %d %d", a, b, c, d, e);

    if (a < b) { x = a;  a = b;  b = x; }
    if (b < c) { x = b;  b = c;  c = x; }
    if (c < d) { x = c;  c = d;  d = x; }
    if (d < e) { x = d;  d = e;  e = x; }

    if (a < b) { x = a;  a = b;  b = x; }
    if (b < c) { x = b;  b = c;  c = x; }
    if (c < d) { x = c;  c = d;  d = x; }

    if (a<b) {  x=a; a=b; b=x; }
    if (b<c) {  x=b; b=c; c=x; }

    if (a<b) {  x=a; a=b; b=x; }

    printf("\n\nAfter %d %d %d %d %d", a, b, c, d, e);

    return 0;
}