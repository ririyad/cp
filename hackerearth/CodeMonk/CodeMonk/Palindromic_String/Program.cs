using System;

namespace Palindromic_String
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            bool result = IsPalindrome(input);

            if (result)
                Console.WriteLine("YES");
            else
                Console.WriteLine("NO");
        }

        private static bool IsPalindrome(string input)
        {
            int min = 0;
            int max = input.Length - 1;

            while(true)
            {
                char firstChar = input[min];
                char lastChar = input[max];

                if (min > max)
                    return true;
                if (char.ToLower(firstChar) != char.ToLower(lastChar))
                    return false;
                min++;
                max--;
            }
        }
    }
}
