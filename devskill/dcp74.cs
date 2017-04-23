using System;

class dcp74
{
    static void Main(string[] args)
    {
        int testCase = Convert.ToInt32(Console.ReadLine());

        for(int i = 1; i <= testCase; i++)
        {
            long N = Convert.ToInt64(Console.ReadLine());
            if(N%2 != 0)
                Console.WriteLine("Case #{0}: {1} {2} {3}", i, (3*N-2), (3*N-1), (3*N));
            else
                Console.WriteLine("Case #{0}: {1} {2} {3}", i, (3*N), (3*N-1), (3*N-2));
        }
    }
}