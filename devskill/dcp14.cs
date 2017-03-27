using System;

namespace devskill
{
    class dcp14
    {
        static void Main(string[] args)
        {
            int testCase = int.Parse(Console.ReadLine());
            for(int i = 0; i < testCase; i++)
            {
                string[] token = Console.ReadLine().Split(' ');
                double num1 = double.Parse(token[0]);
                double num2 = double.Parse(token[1]);
                double num3 = double.Parse(token[2]);

                double temp = Math.Pow(num1, 2) + Math.Pow(num2, 2) + Math.Pow(num3, 2);
                double sqrtRes = Math.Sqrt(temp);

                Console.WriteLine(String.Format("{0:0.00}", sqrtRes));
            }
        }
    }
}
