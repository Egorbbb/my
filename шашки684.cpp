#include<fstream>
using namespace std;

int main()
{
	ifstream in("INPUT.TXT");
	ofstream out("OUTPUT.TXT");
	char letter1, letter2;
	int num1, num2;
	in >> letter1 >> num1 >> letter2 >> num2;
	int let = letter2;
	int lett = letter1;
	int mas[250][250];
	for(int i = 1; i <= 8; i++)
	{
		for(int j = 'a'; j <= 'h'; j++)
		{
			if(i % 2 == 1)
			{
				if(j % 2 == 1)
				{
					mas[i][j] = 1;
				}
				else
				{
					mas[i][j] = 0;
				}
			}
			if(i % 2 == 0)
			{
				if(j % 2 == 1)
				{
					mas[i][j] = 0;
				}
				else
				{
					mas[i][j] = 1;
				}
			}
		}
	}
	if(mas[num2][let] == 1 && num2 > num1 && num2 <= 8 && num2 >=1 && let >= 'a' && let <= 'h' && num2 - num1 >= let - lett && num2 - num1 >=
		abs(lett - let))
	{
		out << "YES";
	}
	else
	{
		out << "NO";
	}
	in.close();
	out.close();
	return 0;
}