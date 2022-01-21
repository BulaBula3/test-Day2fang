#include <iostream>
using namespace std;
#include <string>//用c++风格字符串时候，要包含这个头文件

int main()
{
    short num1 = 10;
    cout << "short占用内存空间为：" <<sizeof(short)<< endl;
    
    int num2 = 10;
    cout << "int占用内存空间为：" << sizeof(int) << endl;

    long num3 = 10;
    cout << "long占用内存空间为：" << sizeof(long) << endl;

    long long num4 = 10;
    cout << "long long占用内存空间为：" << sizeof(long long) << endl;


    float f1 = 3.1415926f;
    double d1 = 3.14;
    cout << "f1=" << f1 << endl;
    cout << "d1" << d1 << endl;

    //统计float和double占用内存空间
    cout << "float占用内存空间为：" << sizeof(float) << endl;

    cout << "double占用内存空间为：" << sizeof(double)<< endl;

    //科学计数法
    float f2 = 3e2;//3*10^2;
    cout << "f2=" << f2 << endl;

    float f3 = 3e-2;//3*0.1^2
    cout << "f3=" << f3 << endl;

    char ch = 'a';
    cout << ch << endl;
    cout << "char字符型变量所占内存：" << sizeof(char) << endl;
    //char ch2 = "b";//创建字符型变量时候，要用单引号
    //char ch2='abcdef';//创建字符型变量时候，单引号内只能有一个字符
    cout << (int)ch << endl;
    cout << "hello world\n";
    cout<<"\\"<<endl;//输出“\”


    //水平制表符 \t 可以整齐输出数据
    cout << "aaaa\thelloworld" << endl;
    cout << "aaaaa\thelloworld" << endl;
    cout << "aaaaaa\thelloworld" << endl;

    //char 字符串名[]
    //等号后面 要用双引号 包含起来字符串
    //c风格字符串
    char str[] = "hello world";
    cout << str << endl;

    //c++风格字符串
    string str2 = "hello world";
    cout << str2 << endl;
    system("pause");

    return 0;
}