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
	string шифровка1 = "бвгґджзйклм";//м
	string шифровка2 = "нпрстфцчшщь";
	vector<char> preposition;

	cout << "\nНапишіть речення, що бажаєте зашифрувати:\n";
	getline(cin, str);
	for (size_t i = 0; i < str.size(); i++)
	{
		for (size_t j = 0; j <= шифровка1.size(); j++)
		{
			if (str[i] == шифровка1[j])
			{
				preposition.push_back(шифровка2[j]);
				break;
			}
			else if (str[i] == шифровка2[j])
			{
				preposition.push_back(шифровка1[j]);
				break;
			}
			else if(j == шифровка1.size())
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