
#include <stdio.h>
// #include <iostream>
// using namespace std;

int fnc(int n){


	if(n<10){

		return n;
	}
	int sum=0;
	while(n>0){

		sum=sum+(n%10);
		n=n/10;
	}
	return fnc(sum);

}


int main()
{

    int n,ret;



    while(true)
    {
    	scanf("%d", &n);

        if(n==0)
        {

            break;
        }

       ret=fnc(n);

       printf("%d\n", ret);

    }

    return 0;
}
