using System;

namespace Prime_Number
{
    class Program
    {
        static void Main(string[] args)
        {
            int N = int.Parse(Console.ReadLine());
            for(int i = 2; i < N; i++)
            {
                if (IsPrime(i))
                    Console.Write($"{i} ");
            }
        }

        private static bool IsPrime(int input)
        {
            if (input == 2)
                return true;
            for (int i = 3; i <= input; input+=2)
            {
                if (input % i == 0)
                    return false;
            }

            return true;
        }
    }
}
