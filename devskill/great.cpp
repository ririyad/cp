#include <stdio.h>
#include <math.h>

int main()
{
    int totalHour, noOfMembers;
    while(scanf("%d %d", &totalHour, &noOfMembers)==2)
    {
        int arr[110], noOfDays, dailyHour = 0;
        for(int i = 0; i< noOfMembers; i++)
        {
            scanf("%d", &arr[i]);
            dailyHour+=arr[i];
        }

        noOfDays = ceil(totalHour/(double)dailyHour);
        if(noOfDays == 1)
            printf("Project will finish within %d day.\n", noOfDays);
        else
            printf("Project will finish within %d days.\n", noOfDays);

    }

    return 0;
}
