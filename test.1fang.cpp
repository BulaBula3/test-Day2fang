#include <iostream>
using namespace std;
#include <string>//��c++����ַ���ʱ��Ҫ�������ͷ�ļ�

int main()
{
    short num1 = 10;
    cout << "shortռ���ڴ�ռ�Ϊ��" <<sizeof(short)<< endl;
    
    int num2 = 10;
    cout << "intռ���ڴ�ռ�Ϊ��" << sizeof(int) << endl;

    long num3 = 10;
    cout << "longռ���ڴ�ռ�Ϊ��" << sizeof(long) << endl;

    long long num4 = 10;
    cout << "long longռ���ڴ�ռ�Ϊ��" << sizeof(long long) << endl;


    float f1 = 3.1415926f;
    double d1 = 3.14;
    cout << "f1=" << f1 << endl;
    cout << "d1" << d1 << endl;

    //ͳ��float��doubleռ���ڴ�ռ�
    cout << "floatռ���ڴ�ռ�Ϊ��" << sizeof(float) << endl;

    cout << "doubleռ���ڴ�ռ�Ϊ��" << sizeof(double)<< endl;

    //��ѧ������
    float f2 = 3e2;//3*10^2;
    cout << "f2=" << f2 << endl;

    float f3 = 3e-2;//3*0.1^2
    cout << "f3=" << f3 << endl;

    char ch = 'a';
    cout << ch << endl;
    cout << "char�ַ��ͱ�����ռ�ڴ棺" << sizeof(char) << endl;
    //char ch2 = "b";//�����ַ��ͱ���ʱ��Ҫ�õ�����
    //char ch2='abcdef';//�����ַ��ͱ���ʱ�򣬵�������ֻ����һ���ַ�
    cout << (int)ch << endl;
    cout << "hello world\n";
    cout<<"\\"<<endl;//�����\��


    //ˮƽ�Ʊ�� \t ���������������
    cout << "aaaa\thelloworld" << endl;
    cout << "aaaaa\thelloworld" << endl;
    cout << "aaaaaa\thelloworld" << endl;

    //char �ַ�����[]
    //�Ⱥź��� Ҫ��˫���� ���������ַ���
    //c����ַ���
    char str[] = "hello world";
    cout << str << endl;

    //c++����ַ���
    string str2 = "hello world";
    cout << str2 << endl;
    system("pause");

    return 0;
}