using System;

namespace dcp147
{
    class Program
    {
        static void Main(string[] args)
        {
            int N = int.Parse(Console.ReadLine());
            long sum = 0;

            for(int num = 1; num < N; num++)
            {
                if (num % 3 == 0 || num % 5 == 0)
                    sum += num;
            }

            Console.WriteLine(sum);
        }
    }
}
