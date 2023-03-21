using System;
 
namespace ConsoleApp3
{
    public class Program
    {
        public static void Main(string[] args)
        {
            int x = 0;
            int n = Convert.ToInt32(Console.ReadLine());
            string statement;
            for (int i = 0; i < n; i++)
            {
                statement = Console.ReadLine();
                if (statement == "X++" || statement == "++X")
                    ++x;
                if (statement == "--X" || statement == "X--")
                    --x;
                
            }
            Console.Write(x);
        }
    }
}