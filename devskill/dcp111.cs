using System;

class dcp111
{
    static void Main(string[] args)
    {
        int testCase = int.Parse(Console.ReadLine());
        for(int i = 0; i < testCase; i++)
        {
            int N = int.Parse(Console.ReadLine());
            int sum = 0;
            int chocolate = 0;
            int rem = 0;
            int j = 1;
            while(true)
            {
                sum+= j;
                if(sum == N)
                {
                    chocolate = j;
                    break;
                }

                if(sum > N)
                {
                    chocolate = j - 1;
                    rem = N - (sum - j);
                    break;
                }
                j++;
            }
            Console.WriteLine(chocolate);
            Console.WriteLine(rem);
        }
    }
}