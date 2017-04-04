using System;

class dcp273
{
    static void Main(string[] args)
    {
        int testCase = int.Parse(Console.ReadLine());
        for(int i = 0; i < testCase; i++)
        {
            int flag = 0;
            string inputStr = Console.ReadLine();
            char[] strToChar = inputStr.ToCharArray();

            for(int j = 0; j < strToChar.Length; j++)
            {
                if(strToChar[j] == 'r')
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 1) Console.WriteLine("Not vely easy");
            else Console.WriteLine("Vely easy"); 
        }
    }
}