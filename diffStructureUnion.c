#include<stdio.h>
struct MyStructure{
	char name[50];
	int age;
	float height;
	};
union MyUnion{
	char name[50];
	int age;
	float height;
	};
int main()
{
struct MyStructure s;
union MyUnion u;
  printf("Size of structure is %lu bytes.\n",sizeof(s));
  printf("Size of union is %lu bytes.\n",sizeof(u));
 
  return 0;
}
