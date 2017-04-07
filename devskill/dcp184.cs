using System;

class Program
{
    static void Main(string[] args)
    {
        int testCase = Convert.ToInt32(Console.ReadLine());
        for(int i = 0; i < testCase; i++)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            int[] arr = new int[n+1];
            arr[0] = 1;
            arr[1] = 3;
           for(int j = 2; j < n; j++)
           {
               arr[j] = arr[j-1] + arr[j-2];
           }
            Console.WriteLine(arr[n-1]); 
            
        }
    }
}