#include <iostream>
void a();
void b();
void c();
int function,starH,starW,x,y,z;
int main() {
	printf("choose function(1,2,or 3):");
	scanf("%d",&function);
	printf("side length H * W:");
	scanf("%d%d",&starH,&starW);
	if(function==1)
	{
		a();
	}
	else if(function==2)
	{
		b();
	}
	else if(function==3)
	{
		c();
	}
	else
	{
		printf("System Error \nWe don't have function %d",function);
	}
	return 0;
}

void a()
{
	z=1;
	for(x=0;x<starH;x++)
	{
		for(y=0;y<z;y++)
		{
			printf("*");
		}
		if(z<=starW)
		{
			z++;
		}
		else
		{
			break;
		}
		printf("\n");
	}
	return;
}

void b()
{
	z=starW;
	for(x=0;x<=starH;x++)
	{
		for(y=z;y>0;y--)
		{
			printf("*");
		}
		if(z<=starW)
		{
			z--;
		}
		else
		{
			break;
		}
	printf("\n");
	}
	return;
}

void c()
{
	int space,iso;
	z=1,iso=starW-1;
	for(x=0;x<=starH;x++)
	{
		for(space=iso;space>=0;space--)
		{
			printf(" ");
		}
		if(iso>=0)
		{
			iso--;
		}
		else
		{
			break;
		}
		
		for(y=0;y<z;y++)
		{
			printf("*");
		}
		if(z<starW)
		{
			z++;
		}
		else
		{
			break;
		}
		printf("\n");
	}
	return;
}