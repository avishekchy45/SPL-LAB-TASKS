#include <stdio.h>
#include <string.h>
int main()
{
  	char str[100];
  	int i,freq[256] = {0};

  	gets(str);

  	for(i = 0; str[i] != '\0'; i++)
  	{
  		freq[str[i]]++;
	}

  	for(i = 0; i < 256; i++)
  	{
		if(freq[i] != 0 && freq[i]%2 == 0)
		{
			printf("%d %c ", freq[i], i);
		}
	}

  	return 0;
}
