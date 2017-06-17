using System;

namespace Find_Product
{
    class Program
    {
        static void Main(string[] args)
        {
            int N = int.Parse(Console.ReadLine());
            double[] inputArray = new double[N];
            var stringArray = Console.ReadLine().Split(' ');
            double result = 1;
            for (int i = 0; i < N; i++)
            {
                inputArray[i] = double.Parse(stringArray[i]);
                result = (result * inputArray[i]) % (Math.Pow(10, 9) + 7);
            }

            Console.WriteLine($"{result}");
        }
    }
}
