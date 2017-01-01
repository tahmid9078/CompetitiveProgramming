#include <stdio.h>

//using namespace std;

int main()
{

    int t, tcase;
    int n, p, q;
    int m[30];
    int totW, count;

    scanf("%d", &t);

    for(tcase=1 ; tcase<=t ; tcase++)
    {


        scanf("%d %d %d", &n, &p, &q);

        for(int i = 0; i < n; i++)
        {
            scanf("%d",&m[i]);
        }
        totW = 0;
        count = 0;
        for(int i = 0; i < n; i++)
        {
            totW =totW+ m[i];
            if(totW > q || count >= p)
                break;
            count++;
        }
        printf("Case %d: %d\n",tcase,count);


    }

    return 0;
}
