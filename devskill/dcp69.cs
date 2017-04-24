using System;

class dcp69
{
    static void Main(string[] args)
    {
        int testCase = Convert.ToInt32(Console.ReadLine());
        for(int i = 0; i < testCase; i++)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            int realSum = 0;
            int kittenSum = 0;

            int[] arr  = new int[n];
            string[] token = Console.ReadLine().Split(' ');
            for(int j = 0; j < n; j++)
            {
                 arr[j] = Convert.ToInt32(token[j]);
                 realSum += arr[j];
                 if(arr[j] >= j)
                    kittenSum += + arr[j] - j;
            }
            Console.WriteLine(realSum - kittenSum);
        }
    }
}