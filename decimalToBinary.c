    #include <stdio.h>


    int main()
    {
        int n, t ,tcase=1;
        int  i, j, c;
        int binaryArray[31];


        scanf("%d", &t);

        while(tcase<=t){

                i=0,j=0, c=0;

                scanf("%d" , &n);

        while(n>0)
        {
            binaryArray[i]=n%2;
            i++;
            n=n/2;
        }

        for(j=i-1 ; j>=0 ; j--)
        {
            if(binaryArray[j]==1){

                c++;
                binaryArray[j]=0;
            }

        }
        if((c & 1)==0){

            printf("Case %d: even\n", tcase);
        }
        else{

            printf("Case %d: odd\n", tcase);
        }

        tcase++;



    }
    return 0;
    }
