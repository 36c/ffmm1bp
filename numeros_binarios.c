#include<stdio.h>
int decimal,i,binario[100],x,z;
int main()
{
	scanf("%d",&decimal);
	for(i=0;decimal>0;i++)
	{
		x=decimal%2;
		binario[i]=x;
		decimal=decimal/2;
		z++;
		{
			for(i=z-1;i>-1;i--)
			{
				printf("%d",binario[i]);
			}
		}
	}
}
