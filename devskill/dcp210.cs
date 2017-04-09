using System;

class dcp210
{
    static void Main(string[] args)
    {
        int testCase = Convert.ToInt32(Console.ReadLine());
        for(int i = 0; i < testCase; i++)
        {
            long n = Convert.ToInt32(Console.ReadLine());
            long result = 2*(long)(Math.Pow(n-1, 2));
            Console.WriteLine(result);
        }
    }
}