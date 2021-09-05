#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	int ret = strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}



const char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 && p2);
	const char* s1 = p1;
	const char* s2 = p2;
	const char* cur = p1;
	if (*p2 == '\0')
	{
		return p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = p2;
		while ((*s2!='\0')&&(*s1!='\0')&& * s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;
		}
	    cur++;
	}
	return NULL;
}


int main()
{
	const char* p1 = "abcdef";
	const char* p2 = "def";
	const char* ret = my_strstr(p1, p2);
	if(ret == NULL)
	{
		printf("×Ó´®²»´æÔÚ\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}