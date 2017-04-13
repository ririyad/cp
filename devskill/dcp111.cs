using System;

class dcp111
{
    static void Main(string[] args)
    {
        int testCase = Convert.ToInt16(Console.ReadLine());
        for(int i = 0; i < testCase; i++)
        {
            int N = Convert.ToInt32(Console.ReadLine());
            int sum = 0;
            int chocolate = 0;
            int rem = 0;
            for(int j = 1; j < N; j++)
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
            }
            Console.WriteLine(chocolate);
            Console.WriteLine(rem);
        }
    }
}