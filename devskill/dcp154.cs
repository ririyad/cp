using System;

class dcp154
{
    static void Main(string[] args)
    {
        int testCase = Convert.ToInt32(Console.ReadLine());
        for(int i = 0; i < testCase; i++)
        {
            long n = Convert.ToInt64(Console.ReadLine());
            long n1 = (long)Math.Pow((n*(n+1)/2), 2);
            long n2 = (n*(n+1)*(2*n + 1))/6;
            long result = (long)Math.Abs(n1-n2);

            Console.WriteLine(result);
        }
    }
}