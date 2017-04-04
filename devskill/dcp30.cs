using System;

class dcp30
{
    static void Main(string[] args)
    {
        int testCase = int.Parse(Console.ReadLine());
        char[] letters = new char[26];
        int[] count = new int[26];

       //storing all lowercase vaules in an array
        for(int i = 0, j = 97; i < 26; i++, j++)
        {
            letters[i] = Convert.ToChar(j);
        }


        for(int i = 1; i <= testCase; i++)
        {
            for(int it= 0; it < 26; it++) count[it] = 0;

            string inputString = Console.ReadLine();
            char[] inputCharArray = inputString.ToCharArray();
            
            for(int j = 0; j < inputCharArray.Length; j++)
            {
                for(int k = 0; k < 26; k++)
                {
                    if(letters[k] == inputCharArray[j])
                    {
                        count[k]+=1;
                    }
                }
            }

            Console.WriteLine("Case {0}:", i);
            for(int l = 0; l < 26; l++)
            {
                if(count[l] != 0)
                {
                    Console.WriteLine("{0} {1}", letters[l], count[l]);
                }
            }
        }
    }
}