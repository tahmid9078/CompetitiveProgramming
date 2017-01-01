#include <stdio.h>

int main()
{

    int t,tcase=1;

   scanf("%d", &t);

    while(tcase<=t){

        int f,sum;
        int x, y, z;

        scanf("%d", &f);
        sum=0;
        for(int i=1; i<=f ; i++){

            scanf("%d %d %d", &x , &y ,&z);

            sum=sum+(x*z);
        }
        printf("%d\n", sum);
        tcase++;
    }

    return 0;
}
