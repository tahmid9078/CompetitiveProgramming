#include <stdio.h>

int main()
{

    int t, tcase;
    int n;
    int tot, ret;
    scanf("%d", &t);

    for(tcase=1; tcase<=t ;tcase++){

        scanf("%d", &n);

        tot=((((((n*567)/9.0)+7492)*235)/47)-498);

        int t=0;

        if(tot<0){
            tot=tot-tot-tot;

        }
        while(t<=1){

            ret=tot%10;
            tot=tot/10;
            t++;
        }
        printf("%d\n", ret);
    }


return 0;
}
