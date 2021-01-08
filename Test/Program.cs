using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using SmartRoadBridge.Alignment;

namespace Test
{
    class Program
    {
        static void Main(string[] args)
        {
            CAngle k = new CAngle(30);
            Console.WriteLine(k.Cos());
            Console.ReadKey(); 
        }
    }
}
