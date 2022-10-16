//�Լ������������
/*
1�����Զ��������������Լ��Զ����������͵����ݽ��д洢
2���������е����ݴ洢������
3�����캯���п��Դ������������
4���ṩ��Ӧ�Ŀ������캯���Լ�operator=��ֹǳ��������
5���ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
6������ͨ���±�ķ�ʽ���������е�Ԫ��
7�����Ի�������е�ǰԪ�ظ��������������
*/
#pragma once
#include<bits/stdc++.h>
using namespace std;

template<class T>
class MyArray
{
public:
	//�вι��� 
	MyArray(int capacity)
	{
		cout << "MyArray�вι���" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	~MyArray()
	{
		cout << "MyArray��������" << endl;
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}
	//��������
	MyArray(const MyArray& arr)
	{
		cout << "MyArray��������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//���
		this->pAddress = new T[arr.m_Capacity];
		//��arr�е����ݶ���������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//β�巨
	void Push_Back(const T & val)
	{
		//�ж������Ƿ���ڴ�С
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;//������ĩβ��������
		this->m_Size++;//���������С
	}
	//βɾ��
	void Pop_Back(/*const T& val*/)
	{
		//���û����ʲ������һ��Ԫ�أ���Ϊβɾ���߼�ɾ��
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}
	//ͨ���±귽ʽ���������е�Ԫ��  arr[0]
	T& operator[](int index)
	{
		return this->pAddress[index];
	}
	//������������
	int getCapacity()
	{
		return this->m_Capacity;
	}
	// ���������С
	int getSize()
	{
		return this->m_Size;
	}
	//operator=��ֹǳ��������
	MyArray& operator=(const MyArray& arr)
	{
		cout << "operator����" << endl;
		//������������������ͷ�
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		//��arr�е����ݶ���������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

private:
	T * pAddress;//ָ��ָ��������ٵ���ʵ����
	int m_Capacity;//��������
	int m_Size;//�����С
};

