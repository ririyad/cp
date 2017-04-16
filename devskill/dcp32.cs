using System;

class dcp32
{
    static void Main(string[] args)
    {
        int testCase = Convert.ToInt32(Console.ReadLine());

        for(int i = 1; i <= testCase; i++)
        {
            string[] token = Console.ReadLine().Split(' ');
            int x1 = Convert.ToInt32(token[0]);
            int y1 = Convert.ToInt32(token[1]);
            int x2 = Convert.ToInt32(token[2]);
            int y2 = Convert.ToInt32(token[3]);

            int distance = Math.Abs((x2-x1)) + Math.Abs((y2-y1));

            Console.WriteLine("Case {0}: {1}", i, distance);
        }
    }
}