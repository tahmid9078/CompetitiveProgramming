#include <stdio.h>

int main()
{

    int t , tcase;
    scanf("%d", &t);
    for(tcase=1 ; tcase<=t ; tcase++){

        int n, temp,ret;
        int max, min;

        scanf("%d", &n);
        scanf("%d", &temp);
        max=temp;
        min=temp;
        for(int i=2 ; i<=n ; i++){

            scanf("%d", &temp);

            if(temp>max){
                max=temp;
            }
            else if(temp<min){

                min=temp;
            }
        }

        ret=(max-min)*2;
        printf("%d\n" , ret);
    }
    return 0;
}
