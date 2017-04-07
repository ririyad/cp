using System;

class dcp38
{
    static void Main(string[] args)
    {
        int testCase = Convert.ToInt32(Console.ReadLine());
        for(int i = 0; i < testCase; i++)
        {
            int N = Convert.ToInt32(Console.ReadLine());

            string minValueString = "", maxValueString = "";
            int minNumberValue = 0, maxNumberValue = 0;

            for(int j = 0; j < 2*N; j+=2)
            {
                string[] token = Console.ReadLine().Split(' ');
                string name = token[j];
                int time = Convert.ToInt32(token[j+1]);

                //checking the min value
                if(j == 0)
                    minNumberValue = Convert.ToInt32(token[1]);
                if(time < minNumberValue)
                    {
                        minNumberValue = time;
                        minValueString = name;
                    }
            
               //checking the max value
               if(j == 0)
                    maxNumberValue = Convert.ToInt32(token[1]);
               if(time >  maxNumberValue)
                {
                    maxNumberValue = time;
                    maxValueString = name;
                }    
            }
            Console.WriteLine("{0} {1}", maxValueString, minValueString);

        }

    }
}