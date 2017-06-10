#include <stdio.h>
#include <algorithm>

using namespace std;

bool bs(int query, int arr[], int N)
{
	 int lo = 0, hi = N-1;
	 while(lo <= hi){
		 int mid = (lo+hi)/2;
		 if(arr[mid] == query)
		 		return true;
			else if(arr[mid] > query)
					hi = mid - 1;
			else if(arr[mid] < query)
					lo = mid + 1;
	 }

	 return false;
}


int main()
{
	//freopen("in.txt", "r", stdin);
	 int N, Q;
	 while(scanf("%d %d", &N, &Q)==2){
		  int arr[N+5];
			for(int i = 0; i< N; i++)
					scanf("%d", &arr[i]);
				sort(arr, arr+N);
			for(int i = 0; i< Q; i++){
				 int query;
				 scanf("%d", &query);
				 bool res = bs(query, arr, N);
				 if(res == true) printf("YES\n");
				 else printf("NO\n");
			}
	 }

	 return 0;
}
