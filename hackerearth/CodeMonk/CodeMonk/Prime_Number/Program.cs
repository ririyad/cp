using System;

namespace Prime_Number
{
    /*
     * using sieve, find the prime number in range, as give, 1000, store the prime numbers in an array.
     * for a given number of input, just iterate and output the number
     */
    public class Program
    {
        static void Main(string[] args)
        {
            const int ARRAY_SIZE = 1000;
            int[] sieve = new int[1010];
            for(int i = 4; i < ARRAY_SIZE; i+=2)
            {
                //will add code here
            }
        }

        private static bool IsPrime(int input)
        {
            if (input == 2)
                return true;
            for (int i = 3; i <= input; input+=2)
            {
                if (input % i == 0)
                    return false;
            }

            return true;
        }
    }
}
