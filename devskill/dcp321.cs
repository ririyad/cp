using System;

class Program
{
    static void Main(string[] args)
    {
        int testCase = int.Parse(Console.ReadLine());
        for (int i = 0; i < testCase; i++)
        {
            string inputString = Console.ReadLine();
            string outputString = "";

            for (int j = 0; j < inputString.Length; j++)
            {
                if (inputString[j] != Char.ToUpper(inputString[j]))
                {
                    outputString += Char.ToUpper(inputString[j]);
                }

                else
                {
                    outputString += Char.ToLower(inputString[j]);
                }
            }

            Console.WriteLine(outputString.ToString());
        }
    }
}