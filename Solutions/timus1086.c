#include <stdio.h>

#include <math.h>

using namespace std;

int main() {

	int n=2;
    int i, s=0;
    int pn[15001];

    for(int j=1; j<=15000 ; ){


	    for(i=2; i<=(int)sqrt(n); i++){

	        if(n%i==0){
	        	s=1;
	            break;
	        }

	    }

	    if(s==0){

	    	pn[j]=n;
	   		j++;

	    }

	    s=0;
		n++;
    }




   int k, kcase;
   int r;
   scanf("%d", &k);



   for(kcase=1 ; kcase<=k ; kcase++){

   	scanf("%d", &r);

   	printf("%d\n",pn[r]);

   }

	return 0;
}
