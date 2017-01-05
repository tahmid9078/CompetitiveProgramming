#include <stdio.h>
#include <math.h>
//using namespace std;

int main()
{
    int t, tcase;
    int a, b, digits;
    double temp;
    int i;
    scanf("%d", &t);

    for(tcase=1; tcase<=t; tcase++)
    {

        scanf("%d %d", &a, &b);

        if(a==0)
        {

            printf("Case %d: %d\n",tcase,1);
        }

        else
        {

            temp=log(a);

            for(i=a ; i>1 ; i--)
            {

                temp=temp+log(i-1);
            }

            digits=(int)(temp/log(b))+1;

            printf("Case %d: %d\n",tcase,digits);
        }
    }

    return 0;
}
