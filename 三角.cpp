#include <iostream>
void a();
void b();
void c();
void d();
int starH,starW,x,y,z;
int main() {
	int function;
	printf("choose function(1,2,3 or 4):"); //1=draw1=a,2=draw2=b,3=draw3=c,4=draw4=d
	scanf("%d",&function);
	switch(function)
	{
		case 1:
			a();
			break;
		case 2:
			b();
			break;
		case 3:
			c();
			break;
		case 4:
			d();
			break;
		default:
			printf("System Error \nWe don't have function %d",function);
	}
	return 0;
}

void a()
{
	printf("side length H * W:");
	scanf("%d%d",&starH,&starW);
	z=1;
	for(x=0;x<starH;x++)
	{
		for(y=0;y<z;y++)
		{
			printf("* ");
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
	printf("side length H * W:");
	scanf("%d%d",&starH,&starW);
	z=starW;
	for(x=0;x<=starH;x++)
	{
		for(y=z;y>0;y--)
		{
			printf("* ");
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
	printf("side length H * W:");
	scanf("%d%d",&starH,&starW);
	int space,iso;
	z=1,iso=starW-1;
	for(x=0;x<=starH;x++)
	{
		for(space=iso;space>=0;space--)
		{
			printf("  ");
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
			printf("* ");
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

void d()
{
	int sidet,space,i;
	z=1;
	printf("side length:");
	scanf("%d",&sidet);
	space=sidet-1;
	for(x=0;x<sidet;x++)
	{
		for(i=0;i<space;i++)
		{
			printf(" ");
		}
		for(y=0;y<z;y++)
		{
			printf("* ");
		}
		if(space>=0)
		{
			space--;
		}
		else
		{
			break;
		}
		if(z<sidet)
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