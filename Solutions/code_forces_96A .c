#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {

	string s;
	cin >> s;
	int checker0=0;
	int checker1=0;
	for(int i=0 ; i<s.length()-1 ; i++){

		if(s[i]==s[i+1]){

			checker1=0;
			checker0 +=1;
			if(checker0==7){
				break;
			}
		}

		else	if(s[i]==s[i+1]){

			checker0=0;
			checker1 +=1;
			if(checker1==7){
				break;
			}
		}

	}

	if(checker0==7 || checker1==7){

		printf("YES");
	}
	else{

		printf("NO");
	}
	return 0;
}
