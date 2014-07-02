
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,c,r,count,m1,m2,p1,p2,i1,i2,temp1,temp2,flag=0,count1=0;
int mat[100][100];
int mat1[100][100];
printf("\n\nEnter the number of rows and columns:\n");
printf("\nROWs:");
scanf("%d",&r);
printf("\nCOLUMNs:");
scanf("%d",&c);
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		mat1[i][j]=0;
	}
}

printf("\n\nEnter Binary numbers:\n\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\n Bmatrix[%d][%d] :",i,j);
scanf("%d",&mat[i][j]);
}
}
printf("\n\n");
printf("\n Input Matrix:\n\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf(" %d",mat[i][j]);
}
printf("\n\n");
}


printf("\n\n");
mat[-1][-1]=0;
mat[-1][c]=0;
mat[r][-1]=0;
mat[r][c]=0;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(i==0)
mat[-1][j]=0;
if(j==0)
mat[i][-1]=0;
if(i==r-1)
mat[r][j]=0;
if(j==c-1)
mat[i][c]=0;
}
}
printf("\n Auxillary Matrix:\n\n");
for(i=-1;i<=r;i++)
{
for(j=-1;j<=c;j++)
{
printf(" %d",mat[i][j]);
}
printf("\n\n");
}

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{

	if(mat[i][j]==1)
	{
		printf("\n Index[%d][%d] = 1",i,j);
		m1=i-1,m2=j-1;
		p1=i,p2=j;
		i1=i;i2=j;
		flag=1;	
		count1++;
		mat1[i][j]=1;
	}
if(flag==1)
break;
}
if(flag==1)
break;
}
if(flag!=1)
printf("\nBlank:no 1s found\n");

while(flag>0 && count1<=r*c)
{
 count=0;
if(mat[m1][m2]==1)
{
temp1=m1;temp2=m2;
flag=2;
count1++;
if(m1==i1 && m2==i2)
flag=3;
else
{
printf("\n Index[%d][%d] = 1",m1,m2);
mat1[m1][m2]=1;
}
}
else
{
while(count<8)
{
if(m1==p1-1 && m2!=p2+1)
m2++;
else if(m2==p2+1 && m1!=p1+1)
m1++;
else if(m1==p1+1 && m2!=p2-1)
m2--;
else if(m2==p2-1 && m1!=p1-1)
m1--;
else
printf("\n\nERROR");
count++;
if(mat[m1][m2]==1)
{
 temp1=m1;temp2=m2;
 flag=2;
 count1++;
if(m1==i1 && m2==i2)
flag=3;
else
{
printf("\n Index[%d][%d] = 1",m1,m2);
mat1[m1][m2]=1;
}
break;
}
}
}
if(flag==1)
{
printf("\n\nDisconnected Image:Cannot find border!\n");
break;	
}
if(flag==3)
break;
if(p1==m1-1 && p2==m2-1)
			{
				m1=m1-1;
			}
			else if(p1==m1-1 && p2==m2)
			{
				m1=m1-1;m2=m2+1;
			}
            else if(p1==m1-1 && p2==m2+1)
			{
				m2=m2+1;
			}
            else if(p1==m1 && p2==m2+1)
			{
				m1=m1+1;m2=m2+1;
			}
            else if(p1==m1+1 && p2==m2+1)
			{
				m1=m1+1;
			}
            else if(p1==m1+1 && p2==m2)
			{
				m1=m1+1;m2=m2-1;
			}
            else if(p1==m1+1 && p2==m2-1)
			{
				m2=m2-1;
			}
            else if(p1==m1 && p2==m2-1)
			{
				m1=m1-1;m2=m2-1;
			}
			else
			{
				printf("\n Error1 \n");
				break;
			}
		p1=temp1;p2=temp2;


}
if(m1==i1 && m2==i2 && flag>0)
{
			printf("\n\n CIRCULAR SCAN COMPLETE :) \n");
			printf("\n\n THE BORDER ::\n\n");

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf(" %d",mat1[i][j]);

}
printf("\n\n");
}

}
	else 
		    printf("\n\n Error in Circular Scan \n");
	
getch();
}
