#include <stdio.h>

//using namespace std;

int main()
{

    int t, tcase;
    int x1, y1, x2, y2;
    int m;
    int x, y;

    scanf("%d", &t);

    for(tcase=1 ; tcase<=t ; tcase++){

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d", &m);
        printf("Case %d:\n", tcase);

        while(m>0){

            scanf("%d %d", &x, &y);
            if((x>x1 && x<x2) &&(y>y1 && y<y2)){

                printf("Yes\n");
            }
            else{

                printf("No\n");
            }
            m--;
        }
    }

return 0;
}
