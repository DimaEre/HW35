#include<iostream>
#include<vector>
#include<string>
#include<windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string str;
	string ��������1 = "����������";//�
	string ��������2 = "�����������";
	vector<char> preposition;

	cout << "\n�������� �������, �� ������ �����������:\n";
	getline(cin, str);
	for (size_t i = 0; i < str.size(); i++)
	{
		for (size_t j = 0; j <= ��������1.size(); j++)
		{
			if (str[i] == ��������1[j])
			{
				preposition.push_back(��������2[j]);
				break;
			}
			else if (str[i] == ��������2[j])
			{
				preposition.push_back(��������1[j]);
				break;
			}
			else if(j == ��������1.size())
			{
				preposition.push_back(str[i]);
			}
		}
	}
	for (size_t i = 0; i < preposition.size(); i++)
	{
		cout << preposition[i];
	}


}