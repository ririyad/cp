using System;
class dcp167
{
    static void Main(string[] args)
    {
        int testCase = int.Parse(Console.ReadLine());
        
        for(int i = 1; i <= testCase; i++)
        {
            int inputNum = int.Parse(Console.ReadLine());
            int result = (int)Math.Pow(((inputNum*(inputNum+1))/2), 2);

            Console.WriteLine("Case {0}: {1}", i, result);
        }
    }
}