using System;

// still not solved
class dcp25
{
    static string Reverse(string str)
    {
        char[] revString = str.ToCharArray();
        Array.Reverse(revString);

        return new string(revString);
    }
    static void Main(string[] args)
    {
        int testCase = int.Parse(Console.ReadLine());
        for(int i = 0; i < testCase; i++)
        {
            string input = Console.ReadLine();
            string revStr = Reverse(input);

            if(input == revStr)
                Console.WriteLine("Yes");
            else
                Console.WriteLine("No");
        }
    }
}