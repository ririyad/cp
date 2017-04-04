using System;

class dcp28
{
    static void Main(string[] args)
    {
        int testCase = int.Parse(Console.ReadLine());
        for(int i = 0; i < testCase; i++)
        {
            string[] token = Console.ReadLine().Split(' ');
            double radius = double.Parse(token[0]);
            double squareSide = double.Parse(token[1]);

            double diagonal = Math.Round((squareSide * Math.Sqrt(2)), 2);
            double diameter  = Math.Round((radius * 2), 2);

            if(diagonal > diameter)
                Console.WriteLine("No");
            else 
                Console.WriteLine("Yes");
        }
    }
}