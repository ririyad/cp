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
                string revWord = "";
                for(int j = word.Length-1; j >= 0; j--)
                {
                    revWord = revWord + word[j];
                }

                Console.WriteLine(revWord);
            }
        }
    }
}
