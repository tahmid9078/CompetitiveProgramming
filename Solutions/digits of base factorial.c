#include <stdio.h>
#include <math.h>
//using namespace std;

int main()
{
    int t, tcase;
    int a, b, digits;
    double temp[1000002];
    int i;
    scanf("%d", &t);

    for(i=1; i<=1000000; i++){

        temp[i]=log(i)+temp[i-1];
    }

    for(tcase=1 ; tcase<=t; tcase++){

        scanf("%d %d", &a, &b);

        digits=(temp[a]/log(b))+1;
        printf("Case %d: %d\n",tcase,digits);
    }

return 0;
}
