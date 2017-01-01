#include <stdio.h>

int main()
{
    int k, kcase;
    int n , m;
    int x,y;
    int eoi=2;

    while(eoi!=0)
    {

        scanf("%d", &k);
        eoi=k;
        scanf("%d %d", &n , &m);

        for(kcase=1 ; kcase<=k ; kcase++)
        {


            scanf("%d %d", &x , &y);

            if(x>n && y>m)
            {

                printf("NE\n");
            }
            else if(x<n && y>m)
            {

                printf("NO\n");
            }
            else if(x<n && y<m)
            {

                printf("SO\n");
            }
            else if(x>n && y<m)
            {

                printf("SE\n");
            }
            else
            {

                printf("divisa\n");
            }

        }
    }

    return 0;
}
