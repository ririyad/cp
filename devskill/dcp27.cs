using System;

class dcp27
{
    static int IsPrime(int num)
    {
        if(num == 0 || num == 1)
            return 0;

        int sqrtNum = (int)Math.Sqrt(num);
        for(int i = 2; i <= sqrtNum; i++)
        {
            if(num % i == 0)
                return 0;
        }

        return 1;
    }

    static void Main(string[] args)
    {
        int testCase = int.Parse(Console.ReadLine());
        for(int i = 0; i < testCase; i++)
        {
            int number = int.Parse(Console.ReadLine());
            int isPrime = IsPrime(number);

            if(isPrime == 1)
                Console.WriteLine("Yes");
            else
                Console.WriteLine("No");
        }
    }
}