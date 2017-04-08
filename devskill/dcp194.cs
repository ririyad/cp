using System;

class dcp194
{
    static void Main(string[] args)
    {
        int testCase = Convert.ToInt32(Console.ReadLine());
        for (int i = 0; i < testCase; i++)
        {
            char[] mobileNumber = Console.ReadLine().ToCharArray();
            if (mobileNumber[0] != '8')
            {
                char deterMineValue = mobileNumber[2];
                switch (deterMineValue)
                {
                    case '1':
                        Console.WriteLine("88" + new string(mobileNumber) + " Citycell");
                        break;
                    case '5':
                        Console.WriteLine("88" + new string(mobileNumber) + " Teletalk");
                        break;
                    case '6':
                        Console.WriteLine("88" + new string(mobileNumber) + " Airtel");
                        break;
                    case '7':
                        Console.WriteLine("88" + new string(mobileNumber) + " Grameenphone");
                        break;
                    case '8':
                        Console.WriteLine("88" + new string(mobileNumber) + " Robi");
                        break;
                    default:
                        Console.WriteLine("88" + new string(mobileNumber) + " Banglalink");
                        break;
                }
            }

            else
            {
                char deterMineValue = mobileNumber[4];
                switch (deterMineValue)
                {
                    case '1':
                        Console.WriteLine(new string(mobileNumber) + " Citycell");
                        break;
                    case '5':
                        Console.WriteLine(new string(mobileNumber) + " Teletalk");
                        break;
                    case '6':
                        Console.WriteLine(new string(mobileNumber) + " Airtel");
                        break;
                    case '7':
                        Console.WriteLine(new string(mobileNumber) + " Grameenphone");
                        break;
                    case '8':
                        Console.WriteLine(new string(mobileNumber) + " Robi");
                        break;
                    default:
                        Console.WriteLine(new string(mobileNumber) + " Banglalink");
                        break;
                }

            }
        }
    }
}