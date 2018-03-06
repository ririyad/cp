using System;

namespace BirthdayParty
{
    class Program
    {
        static void Main(string[] args)
        {
            int testCase = Convert.ToInt32(Console.ReadLine());
            for(int i = 0; i < testCase; i++)
            {
                string[] tokens = Console.ReadLine().Split();
                int friends = int.Parse(tokens[0]);
                int choco = int.Parse(tokens[1]);

                if (choco % friends == 0)
                    Console.WriteLine("Yes");
                else
                    Console.WriteLine("No");
            }
        }
    }
}
