using MyCSLib;
using System;

namespace 라이브러리_사용_앱
{
    class Program
    {
        static void Main(string[] args)
        {
            Demo demo = new Demo();
            string msg = demo.Hello(4);
            Console.WriteLine("수신 메시지:{0}", msg);

        }
    }
}
