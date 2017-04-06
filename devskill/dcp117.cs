using System;

class dcp117
{
    static void Main(string[] args)
    {
        int testCase = Convert.ToInt32(Console.ReadLine());
        for(int i = 0; i < testCase; i++)
        {
            long n = Convert.ToInt64(Console.ReadLine());
            long result = n*(n+1)/2;
            Console.WriteLine(result);
        }

    }
}