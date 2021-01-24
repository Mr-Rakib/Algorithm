using System;

namespace Rabin_Karp_Pattern_Finding
{
    class Program
    {
        public readonly static int TotalChar = 256;

        static void search(String pat, String text, int primeNumber)
        {
            int patternLength = pat.Length;
            int textLength = text.Length;
            int i, j;
            int patternHash = 0; // hash value for pattern  
            int textHash = 0; // hash value for txt  
            long hash = 1;
            int value = 1;

            for (int index = 0; index < textLength - 1; index++)
            {
                hash = (hash * TotalChar) % primeNumber;
                value = value * 3;
                Console.WriteLine($"hash: {hash}\tvalue: {value}");
            }

            for (int index = 0; index < patternLength; index++)
            {
                patternHash = ((patternHash * TotalChar)+ pat[index]) % primeNumber;
                textHash += text[index] * (int)Math.Pow(TotalChar, index) % primeNumber;
                Console.WriteLine($"PatHash: {patternHash}\ttextHash: {textHash}\thash: {hash}");
            }

            for (i = 0; i < textLength - patternLength; i++)
            {
                if (patternHash == textHash)
                {
                    j = 0;
                    while (j < patternLength)
                    {
                        if (pat[j] != text[i + j])
                        {
                            break;
                        }
                        j++;
                    }
                    if (j == patternLength - 1)
                    {
                        Console.WriteLine($"pattern found at {i}");
                    }
                }
                if (i < textLength - patternLength)
                {
                    textHash = textHash - (text[i] * (int)Math.Pow(TotalChar, patternLength - 1) % primeNumber);
                }
            }

        }
        Program()
        {
            string text = "ABDCB";
            string pat = "DC";

            // A prime number  
            int primeNumber = 11;
            search(pat, text, primeNumber);
        }
       
        static string GetTheCharacter(string value, int start)
        {
            string retvalue = "";
            for (int index = start; index < value.Length; index += 2)
            {
                retvalue += value[index];
            }
            return retvalue;
        }

        static void Main(String[] args)
        {
            int numberOfInput;
            numberOfInput = Convert.ToInt32(Console.ReadLine());
            string[] inputs = new string[numberOfInput];
            string[] result = new string[numberOfInput];

            for (int index = 0; index < numberOfInput; index++)
            {
                inputs[index] = Console.ReadLine();
            }

            for (int index = 0; index < numberOfInput; index++)
            {
                result[index] = GetTheCharacter(inputs[index], 0)+" ";
                result[index] += GetTheCharacter(inputs[index], 1);
            }

            for (int index = 0; index < numberOfInput; index++)
            {
                Console.WriteLine($"{result[index]}");
            }

        }
    }
}
