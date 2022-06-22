using System;
using System.Runtime.InteropServices;

namespace ConsoleAppForCppDll
{
    class Program
    {
        const string DLL_PATH = @"C:\Users\Liya\source\repos\ConsoleAppForCppDll\x64\Debug\TestDll.dll";

        [DllImport(DLL_PATH)]
        private static extern IntPtr createHoge();

        [DllImport(DLL_PATH)]
        private static extern void freeHoge(IntPtr instance);

        [DllImport(DLL_PATH)]
        private static extern int getResult(IntPtr instance, int a);

        static void Main(string[] args)
        {
            IntPtr hoge = createHoge();
            Console.WriteLine(hoge); // => Show the pointer address.

            int result = getResult(hoge, 10);
            Console.WriteLine(result); // => 15

            freeHoge(hoge);
        }
    }
}
