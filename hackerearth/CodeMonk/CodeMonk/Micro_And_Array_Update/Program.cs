using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Micro_And_Array_Update
{
    class Program
    {
        static void Main(string[] args)
        {
            int T = int.Parse(Console.ReadLine());

            for(int i = 0; i< T; i++)
            {
                string[] token = Console.ReadLine().Split();
                int N = int.Parse(token[0]);
                int K = int.Parse(token[1]);
                int[] arr = new int[N];

                for(int j = 0; j < N; j++)
                {
                    string[] token2 = Console.ReadLine().Split();
                    arr[j] = int.Parse(token[j]);
                }

                int count = 0;
                int k = 0;
                for(int j = 0; j < N; j += k)
                {
                    if (arr[j] < K)
                    {
                        count++;
                        k = 0;
                        for (int l = 0; i < N; l++)
                            arr[l] = arr[l]++;
                    }
                    else
                        k++;
                }

                Console.WriteLine(count);
            }
        }
    }
}
