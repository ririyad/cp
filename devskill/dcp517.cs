using System;
using System.Collections.Generic;
public class Test
{
	    static void Main(string[] args)
        {
            int testCase = int.Parse(Console.ReadLine());
            for(int i = 0; i < testCase; i++)
            {
                int maxGoal = 1;
                string con = "";
                int groupNum = int.Parse(Console.ReadLine());
                for(int j = 0; j < groupNum; j++)
                {
                    var list = new Dictionary<string, int>(); 
                    string[] token = Console.ReadLine().Split(' ');
                    string country = token[0];
                    int goal = int.Parse(token[1]);
                    list.Add(country, goal);
                    foreach(var pair in list)
                    {
                        if(pair.Value > maxGoal)
                        {
                            maxGoal = pair.Value;
                            con = pair.Key;
                        }   
                    } 
                }
                Console.WriteLine("Winner: " + "\\" + con + "/");
            }
        }
}