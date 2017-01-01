#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t, tcase;
    string s;


    scanf("%d", &t);

    for(tcase=1; tcase<=t; tcase++)
    {

        cin >> s;



        if(s.length()==5)
        {

            printf("3\n");
        }
        else if(s.length()==3)
        {



            if(s[0]=='o' && s[1]=='n'){

                printf("1\n");
            }
            else if(s[1]=='n' && s[2]=='e'){
                printf("1\n");
            }
            else if(s[2]=='e' && s[0]=='o'){

            	printf("1\n");
            }
            else{

            	printf("2\n");
            }
        }

    }

    return 0;
}
