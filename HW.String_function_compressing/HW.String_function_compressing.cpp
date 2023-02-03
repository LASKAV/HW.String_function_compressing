#include <iostream>
#include <string>

using namespace std;

/*
� ������ ������ �������� �����, ����������� ��������� � ������������ ����������. ������ ������ �������
� ���, ��� ����� ������� ����������� �� ������ �������, � ����� ���������� ����� ������� ��������� (�������
����� ������ ������ �����������). ���� ������ �������� ������ �������, �� ��� ��� �����������.
�������� �������, ��������� ��������� ������� �����.
*/

void Str_compressing(string str)
{
    cout << "length = " << str.length() << endl;
    cout << "Text = " << str << endl;
    cout << "Spaces = " << std::count(str.begin(), str.end(), ' ') << '\n';

	for (int i = 0; i < str.length(); i++)
	{
		if (isalpha(str[i]))									
		{
			for (int j = 0; j < str.length(); j++)
			{
				if (isspace(str[j]) && isspace(str[j + 1]))	
				{
					str.erase(j + 1, 1);						
					j--;
				}
			}											    
		}
	}
	cout << str;
}

int main()
{
    string str = "Text      test for   the    sake       of tests     test ";
    Str_compressing(str);
    return 0;
}
