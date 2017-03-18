using System;

namespace devskill
{
    class dcp26
    {
        static void Main(string[] args)
        {
            int testCase = int.Parse(Console.ReadLine());
            for(int i = 0; i < testCase; i++)
            {
                string word = Console.ReadLine();
                var wordInArray = word.ToCharArray();
                for(int j = 0; j < wordInArray.Length; j++)
                {
                    Console.WriteLine($"{i}: wordInArray[i]");
                }
            }
        }
    }
}
