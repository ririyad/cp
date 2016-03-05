#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	int t;
	if(scanf("%d", &t)==1);
	while(t--){
		int height = 1;
		int n;
		if(scanf("%d", &n)==1);
		if(n!=0){
			for(int i=1; i<=n; i++){
			if(i%2!=0)
				height = height*2;
			else
				height = height + 1;
			}
		printf("%d\n", height);
	}
	else
	printf("%d\n", height);

	}
	return 0;
}
