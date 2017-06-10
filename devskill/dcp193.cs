using System;
using System.Collections.Generic;
using System.Diagnostics;

class dcp193 
{
    static void Main(string[] args) 
    {
        var test = new Dictionary<string, int>();
        test["bird"] = 10;
        test["frog"] = 15;
        test["cat"] = 60;

        int sum = 0;
        const int _max = 1000000;

        var s1 = Stopwatch.StartNew();
        for(int i = 0; i < _max; i++)
        {
            foreach(var pair in test)
            {
                sum += pair.Value;
            }
        }
        s1.Stop();


        var s2 = Stopwatch.StartNew();
        for(int i = 0; i <_max; i++)
        {
            foreach(var key in test.Keys)
            {
                sum += test[key];
            }
        }
        s2.Stop();

        Console.WriteLine(s1.Elapsed.TotalMilliseconds);
        Console.WriteLine(s2.Elapsed.TotalMilliseconds);
    }
}