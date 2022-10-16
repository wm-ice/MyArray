#include<bits/stdc++.h>
#include"MyArray.hpp"
using namespace std;

//打印
void printArray(MyArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//测试自定义数据类型
class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void printPersonArray(MyArray<Person> &arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "姓名：" << arr[i].m_Name << " 年龄：" << arr[i].m_Age << endl;
	}
}

int main()
{
	//内置数组类型
	MyArray<int>arr1(5);
	//尾插法
	for (int i = 0; i < 5; i++)
	{
		arr1.Push_Back(i);
	}
	cout << "arr1数组：" << endl;
	printArray(arr1);
	cout << "arr1数组的容量为：" <<arr1.getCapacity() << endl;
	cout << "arr1数组的大小为：" << arr1.getSize() << endl;
	MyArray<int>arr2(arr1);
	cout << "arr2数组：" << endl;
	printArray(arr2);
	//尾删法
	arr2.Pop_Back();
	printArray(arr2);
	cout << "arr2数组的容量为：" << arr2.getCapacity() << endl;
	cout << "arr2数组的大小为：" << arr2.getSize() << endl;
	
	/*MyArray<int>arr3(100);
	arr3 = arr1;*/

	//自定义类型
	MyArray<Person> arr4(10);
	Person p1("张三", 18);
	Person p2("李四", 18);
	Person p3("王五", 19);
	Person p4("赵六", 20);
	Person p5("林七", 21);
	Person p6("陈八", 18);
	arr4.Push_Back(p1);
	arr4.Push_Back(p2);
	arr4.Push_Back(p3);
	arr4.Push_Back(p4);
	arr4.Push_Back(p5);
	arr4.Push_Back(p6);
	cout << "arr4数组：" << endl;
	printPersonArray(arr4);
	cout << "arr4数组的容量为：" << arr4.getCapacity() << endl;
	cout << "arr4数组的大小为：" << arr4.getSize() << endl;
	return 1;
}