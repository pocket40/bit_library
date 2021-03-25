using System;

//dllexeport dllimport를 대체하는 것
namespace MyCSLib
{
    public class Demo
    {
        public string Hello(int num)
        {
            Console.WriteLine("하이");
            return num.ToString(); //ToString 문자열로 변환
        }
    }
}
