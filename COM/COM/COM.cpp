// COM.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include "atlcomcli.h"  
#import "E:\\visual studio 2017\\Projects\\ACOM\\x64\\Release\\ACOM.dll" no_namespace  //
using namespace std;
int main()   
{
	    CoInitialize(NULL);
		CLSID clsid;//CLSIDָ��
		CLSIDFromProgID(OLESTR("base.1"), &clsid);//ProgIDָ�룬classname.rgs�п����ҵ�
		//rgs�����ע��Ľű��ļ�����ʹ��Regsvr32.exeע�����ʱ������ڲ����ǵ���������ļ���rgs�ļ�������Դ����ʽ����DLL�ڵġ�
		CComPtr<ITirBase> pFirstClass;//����ָ�룬ָ��COM�е���
		pFirstClass.CoCreateInstance(clsid);
		long ret = pFirstClass->Add(1,2);//������
		cout << ret << endl;
		pFirstClass.Release();//�ͷ��ڴ�
		CoUninitialize();
	return 0;
}


