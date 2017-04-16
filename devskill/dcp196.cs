using System;

class dcp196
{
    static void Main(string[] args)
    {
        int testCase = int.Parse(Console.ReadLine());
        for(int i = 0; i < testCase; i++)
        {
            string[] token = Console.ReadLine().Split(' ');
            double V = double.Parse(token[0]);
            double T = double.Parse(token[1]);

            double result = (-V)/T;

            Console.WriteLine(Math.Round(result, 2));
        }
    }
}