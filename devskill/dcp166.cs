using System;

class dcp166
{
    static void Main(string[] args)
    {
        int testCase = int.Parse(Console.ReadLine());
        for(int i = 1; i <= testCase; i++)
        {
            int itemNo = int.Parse(Console.ReadLine());
            double itemTotalPrice = 0;
            for(int j = 0; j <itemNo; j++)
            {
                string[] token = Console.ReadLine().Split(' ');
                double itemPrice = double.Parse(token[0]);
                int quantity = int.Parse(token[1]);
                itemTotalPrice= itemTotalPrice + (itemPrice * quantity);
            }
            double paidMoney = double.Parse(Console.ReadLine());
            Console.WriteLine("Case {0}: {1}", i, (int)(paidMoney - itemTotalPrice));

        }
    }
}