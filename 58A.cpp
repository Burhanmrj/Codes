#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
	//unordered_set<char>a;
	char b[100];
	int i = 0;
	fgets(b, sizeof(b), stdin);
	while (b[i] != '\0')
	{
		if (b[i] == 'h')
		{
			if (b[i] == b[i + 1])
				i++;
			if (b[i+=1] == 'e')
			{
				if (b[i] == b[i + 1])
					i++;
				if (b[i += 1] == 'l')
				{
					if (b[i] == b[i + 1])
					{
						i+=2;
						if(b[i]==''
					}
				}
			}
		}
	}
		
	
}