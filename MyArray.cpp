#include<bits/stdc++.h>
#include"MyArray.hpp"
using namespace std;

//��ӡ
void printArray(MyArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//�����Զ�����������
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
		cout << "������" << arr[i].m_Name << " ���䣺" << arr[i].m_Age << endl;
	}
}

int main()
{
	//������������
	MyArray<int>arr1(5);
	//β�巨
	for (int i = 0; i < 5; i++)
	{
		arr1.Push_Back(i);
	}
	cout << "arr1���飺" << endl;
	printArray(arr1);
	cout << "arr1���������Ϊ��" <<arr1.getCapacity() << endl;
	cout << "arr1����Ĵ�СΪ��" << arr1.getSize() << endl;
	MyArray<int>arr2(arr1);
	cout << "arr2���飺" << endl;
	printArray(arr2);
	//βɾ��
	arr2.Pop_Back();
	printArray(arr2);
	cout << "arr2���������Ϊ��" << arr2.getCapacity() << endl;
	cout << "arr2����Ĵ�СΪ��" << arr2.getSize() << endl;
	
	/*MyArray<int>arr3(100);
	arr3 = arr1;*/

	//�Զ�������
	MyArray<Person> arr4(10);
	Person p1("����", 18);
	Person p2("����", 18);
	Person p3("����", 19);
	Person p4("����", 20);
	Person p5("����", 21);
	Person p6("�°�", 18);
	arr4.Push_Back(p1);
	arr4.Push_Back(p2);
	arr4.Push_Back(p3);
	arr4.Push_Back(p4);
	arr4.Push_Back(p5);
	arr4.Push_Back(p6);
	cout << "arr4���飺" << endl;
	printPersonArray(arr4);
	cout << "arr4���������Ϊ��" << arr4.getCapacity() << endl;
	cout << "arr4����Ĵ�СΪ��" << arr4.getSize() << endl;
	return 1;
}