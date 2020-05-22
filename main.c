#include <stdio.h>

int main()
{
    int mark;
    printf("enter marks");
    scanf("%d",&mark);
    if(mark<=100&&mark>=85)
    printf("grade A");
    else if(mark<=85&&mark>=70)
        printf("grade B");
    else if(mark<=69&&mark>=55)
        printf("grade C");
    else if(mark<=54&&mark>=40)
        printf("grade D");
    else
        printf("grade F");
    return 0;
}
