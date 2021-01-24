using System;
using System.Collections.Generic;
using System.Numerics;

namespace Short_Form_Checker__SFC_
{
    class Program
    {
        bool SFC(string text, string sf)
        {
            string[] splitChar = text.Split(" ");
            bool checker = false;
            if (sf.Length == splitChar.Length)
            {
                checker = true;
                if (checker)
                {
                    for (int index = 0; index < splitChar.Length; index++)
                    {
                        checker &= (splitChar[index][0] == sf[index]) ? true : false;
                    }
                }
            }
            return checker;
        }
        private void BigIntegerManupulation()
        {
            BigInteger number = new BigInteger(9999999999999999999);
            BigInteger number2 = 999999999999999999;
            Console.WriteLine($"{number} --- {number2} --- {number*number2*number*number2}");
        }

        private void Palindrome(string v)
        {
            Stack<char> st = new Stack<char>();
            Queue<char> q = new Queue<char>();

            for (int index = 0; index < v.Length; index++)
            {
                st.Push(v[index]);
                q.Enqueue(v[index]);
            }
            for(int index = 0; index< v.Length; index++)
            {
                if(st.Pop() != q.Dequeue())
                {
                    Console.WriteLine("Not Palindrome");
                    return;
                }
            }
            Console.WriteLine("Palindrome");
        }

        private void Recursive(int v)
        {
            int reverse = 0;
            if (v != 0)
            {
                reverse = reverse * 10 + (v % 10);
                Console.Write($"{reverse} ");
                Recursive(v / 10);
                Console.Write($"{reverse} ");
            }
        }



        private void Recursive1(int v)
        {
            int reverse = 0;
            while (v != 0)
            {
                reverse = reverse * 10 + (v % 10);
                v /= 10;
            }
            Console.WriteLine(reverse);
        }

        private void NumberOfTriplets()
        {
            int numberOfInput;
            int hash = -1, counter = 0; 
            numberOfInput = Convert.ToInt32(Console.ReadLine());
            int[] numbers = new int[numberOfInput];
            for(int index = 0; index < numberOfInput; index++)
            {
                numbers[index] = Convert.ToInt32(Console.ReadLine());
            }
            Array.Sort(numbers);

            for(int i = 0; i<= numbers.Length -3; i++)
            {
                hash = (numbers[i + 2] - numbers[i + 1]) - (numbers[i + 1] - numbers[i]);
                if (hash ==0)
                {
                    counter++;
                    Console.WriteLine( $"[{numbers[i]}, {numbers[i + 1]}, {numbers[i+2]}]\t");
                }
            }
        }

        Program()
        {
            string text = "International Collegiate Programming Contest";
            string sf = "ICPC";

            //Console.WriteLine(SFC(text, sf));
            //BigIntegerManupulation();
            //Recursive(123456);
            //Palindrome("madam"); 
            //NumberOfTriplets();
        }

        static void Main(string[] args)
        {
            new Program();
        }
    }
}
