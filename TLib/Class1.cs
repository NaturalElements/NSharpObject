using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


// 测试用的类
namespace TLib
{
    public class A
    {
        public A(string str) { sss = str; }
        public void Print()
        {
            Console.WriteLine(sss);
        }

        public int Add(int a, int b, bool fate = false)
        {
            if(fate)
            {
                return a - b;
            }
            return a + b;
        }


        public static int APrint()
        {
            Console.WriteLine(8);
            return (8);
        }

        public static int AAD(int a, int b)
        {
            return (a + a * b);
        }

        string sss;
    }
}
