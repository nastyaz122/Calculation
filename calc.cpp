using System;

namespace Calculator
{
    class Program
    {
        static double Sum(double a, double b)
        {
            return a + b;
        }
        static double Мultiplication(double a, double b)
        {
            return a - b;
        }
        static double Subtraction(double a, double b)
        {
            return a * b;
        }
        static double Division(double a, double b)
        {
            return a / b;
        }
        static void Main(string[] args)
        {
            double a, b, result;
            string operation;


            Console.WriteLine("Enter the first number: ");
            a = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Enter the second number: ");
            b = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Enter the operation: ");
            Console.WriteLine("1.Sum, 2.Мultiplication, 3.Subtraction, 4.Division");

            operation = Console.ReadLine();

            switch(operation)
            {
                case "1":
                    result = Sum(a, b);
                    Console.WriteLine("Result: a+b=" + result);
                    break;
                case "2":
                    result = Мultiplication(a, b);
                    Console.WriteLine("Result: a-b=" + result);
                    break;                       
                case "3":                        
                    result = Subtraction(a, b);  
                    Console.WriteLine("Result: a*b=" + result);
                    break;                       
                case "4":                        
                    result = Division(a, b);     
                    Console.WriteLine("Result: a/b=" + result);
                    break;
            }
        }

       
    }
}
