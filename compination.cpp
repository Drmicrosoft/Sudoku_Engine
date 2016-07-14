#include <stdio.h>
int main ()
{
int err=0;
int y[9]={10,12,16,4,18,8,14,6,2};

int i = 0 ;
int j = 0 ;
int k = 0 ;
int omar = 0 ;
int count = 1 ;
for (i=0;i<=8;i++)
{
	for(j=i+1;j<=8;j++)
	{
		for(k=j+1;k<=8;k++)
		{
			omar = y[i]+y[j]+y[k];
			if(omar == 30)
			count ++;
			
		}
	}
}
printf("count = %d " , count);

scanf("%d",&err);

int a [count];
int b [count];
int c [count];
int zzz = count ;
count = 0 ;
for (i=0;i<=8;i++)
{
	for(j=i+1;j<=8;j++)
	{
		for(k=j+1;k<=8;k++)
		{
			omar = y[i]+y[j]+y[k];
			if(omar == 30)
			{
				a[count]=y[i];
				b[count]=y[j];
				c[count]=y[k];				
				count++;
			}
			
		}
	}
}
for (i=0;i<=count-1;i++)
printf("\n %d\t%d\t%d",a[i],b[i],c[i]);
scanf("%d",&err);
int n [2][9] ; 
int o = count-1 ;
count = 0 ;
for(j=0;j<=8;j++)
{
	for(i=0;i<=o;i++)
	{
		if(a[i]==y[j])
		count++;
		if(b[i]==y[j])
		count++;
		if(c[i]==y[j])
		count++;
	}
	n[0][j]=y[j];
	n[1][j]=count;
	count = 0 ;
	
}
for(j=0;j<=8;j++)
printf ("\n y[%d] = %d count %d ",j,n[0][j],n[1][j]);

scanf("%d",&err);
int yy = 0 ;
count = 0;
for(i=0;i<=(8-count);i++)
{	
	for(j=i+1;j<=(8-count);j++)
	{
		if(n[1][i]>n[1][j])
		{
			yy=n[1][j];
			n[1][j]=n[1][i];
			n[1][i]=yy;
			yy=n[0][j];
			n[0][j]=n[0][i];
			n[0][i]=yy;
		}
		
	}
	
}
printf("\n\n\n");
for(j=0;j<=8;j++)
printf ("\n y[%d] = %d count %d ",j,n[0][j],n[1][j]);

printf("\n\n\n");
scanf("%d",&err);

int m [3][3] ;




for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
m[i][j]=0;
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
printf("%d\t",m[i][j]);
printf("\n");
}
scanf("%d",&err);


if (n[1][zzz-1]	!= 4)
printf("error");
else 
printf("omar");

int v[n[1][zzz-1]];
count =0;

	for(i=0;i<=o;i++)
	{
		if(a[i]==n[0][zzz-1])
		{v[count] = i;count++;}
		if(b[i]==n[0][zzz-1])
		{v[count] = i;count++;}
		if(c[i]==n[0][zzz-1])
		{v[count] = i;count++;}
	}
int kl[n[1][zzz-1]];
for(i=0;i<n[1][zzz-1];i++)
	{
		kl[i]=0;
		printf("\n v [ %d ] = %d " , i , v[i]);
		for (j=0 ; j<=8; j++)
		{
			if(a[v[i]] == n[0][j])
				{kl[i] = kl[i] + n[1][j];
				break ;}
		}
		for (j=0 ; j<=8; j++)
		{
			if(b[v[i]] == n[0][j])
				{kl[i] = kl[i] + n[1][j];
				break ;}
		}
		for (j=0 ; j<=8; j++)
		{
			if(c[v[i]] == n[0][j])
				{kl[i] = kl[i] + n[1][j];
				break ;}
		}
	}
		
	
	for(i=0;i<n[1][zzz-1];i++)
	{
		printf("\n kl [ %d ] = %d " , i , kl[i]);
	}
int ome[2];
count =0;
for(i=0;i<n[1][zzz-1];i++)
{	
	for(j=i+1;j<n[1][zzz-1];j++)
	{
		if(kl[i]>kl[j])
		{
			ome[count]=j;
			kl[j]=kl[i];
			break;
			
		}
		
	}
	count ++;
	if(count == 2 )
	break;
	
}
for(i=0;i<n[1][zzz-1];i++)
	{
		printf("\n kl [ %d ] = %d " , i , kl[i]);
	}

m[1][1]=n[0][zzz-1];

printf("\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
printf("%d\t",m[i][j]);
printf("\n");
}

for(j=0;j<2;j++)
printf("%d\t",ome[j]);
count = 0 ;
int yu [2] ;
if(a[ome[0]]!=n[0][zzz-1])
{yu[count] = a[ome[0]];count++;}

if(b[ome[0]]!=n[0][zzz-1])
{yu[count] = b[ome[0]];count++;}

if(c[ome[0]]!=n[0][zzz-1])
{yu[count] = c[ome[0]];count++;}
m[0][1]=yu[0];
m[2][1]=yu[1];

count = 0 ;
if(a[ome[1]]!=n[0][zzz-1])
{yu[count] = a[ome[1]];count++;}

if(b[ome[1]]!=n[0][zzz-1])
{yu[count] = b[ome[1]];count++;}

if(c[ome[1]]!=n[0][zzz-1])
{yu[count] = c[ome[1]];count++;}
m[1][0]=yu[0];
m[1][2]=yu[1];



printf("\n\n\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
printf("m[%d][%d] = %d\t",i,j,m[i][j]);
printf("\n");
}




count =0;
int pos = 0 ;
	for(i=0;i<=8;i++)
	{
		if(a[i]==m[2][1])
		{v[count] = i;count++;pos = 1 ;}
		if(b[i]==m[2][1])
		{v[count] = i;count++;pos = 2 ;}
		if(c[i]==m[2][1])
		{v[count] = i;count++;pos = 3 ;}
	}
	for (i=0;i<=7;i++)
	printf("\n %d\t%d\t%d",a[i],b[i],c[i]);
	for(i=0;i<2;i++)
		printf("\n v [ %d ] = %d " , i , v[i]);
int vb = 0 ;

		if(a[v[0]]==n[0][zzz-1])
		{vb=v[1];}
		if(b[v[0]]==n[0][zzz-1])
		{vb=v[1];}
		if(c[v[0]]==n[0][zzz-1])
		{vb=v[1];}


		if(a[v[1]]==n[0][zzz-1])
		{vb=v[0];}
		if(b[v[1]]==n[0][zzz-1])
		{vb=v[0];}
		if(c[v[1]]==n[0][zzz-1])
		{vb=v[0];}
int v1[2];
printf("\n vb = %d " , vb );
if (pos == 1)
{v1[0]=b[vb];v1[1]=c[vb];}
if (pos == 2)
{v1[0]=a[vb];v1[1]=c[vb];}
if (pos == 3)
{v1[0]=a[vb];v1[1]=b[vb];}




count =0;

	for(i=0;i<=8;i++)
	{
		if(a[i]==m[1][2])
		{v[count] = i;count++;pos = 1 ;}
		if(b[i]==m[1][2])
		{v[count] = i;count++;pos = 2 ;}
		if(c[i]==m[1][2])
		{v[count] = i;count++;pos = 3 ;}
	}
	for (i=0;i<=7;i++)
	printf("\n %d\t%d\t%d",a[i],b[i],c[i]);
	for(i=0;i<2;i++)
		printf("\n v [ %d ] = %d " , i , v[i]);
int vb1 = 0 ;

		if(a[v[0]]==n[0][zzz-1])
		{vb1=v[1];}
		if(b[v[0]]==n[0][zzz-1])
		{vb1=v[1];}
		if(c[v[0]]==n[0][zzz-1])
		{vb1=v[1];}


		if(a[v[1]]==n[0][zzz-1])
		{vb1=v[0];}
		if(b[v[1]]==n[0][zzz-1])
		{vb1=v[0];}
		if(c[v[1]]==n[0][zzz-1])
		{vb1=v[0];}
int v2[2];
printf("\n vb1 = %d " , vb1 );
if (pos == 1)
{v2[0]=b[vb1];v2[1]=c[vb1];}
if (pos == 2)
{v2[0]=a[vb1];v2[1]=c[vb1];}
if (pos == 3)
{v2[0]=a[vb1];v2[1]=b[vb1];}

	for(i=0;i<2;i++)
		printf("\n v1 [ %d ] = %d " , i , v1[i]);
			for(i=0;i<2;i++)
		printf("\n v2 [ %d ] = %d " , i , v2[i]);
		

int bnm1 = 0 ;
int bnm2 = 0 ;
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		{
			if(v1[i]==v2[j])
			{bnm1 = i;bnm2=j;}
			
		}

m[2][2]=v1[bnm1];
if(bnm2==0)
m[0][2]=v2[1];
if(bnm2==1)
m[0][2]=v2[0];

if(bnm1==0)
m[2][0]=v1[1];
if(bnm1==1)
m[2][0]=v1[0];



printf("\n\n\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
printf("m[%d][%d] = %d\t",i,j,m[i][j]);
printf("\n");
}
int hint = 0 ;

for(k=0;k<9;k++)
{
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
	if(m[i][j]==y[k])
		hint =1;
}

}
if(hint==1)
hint = 0 ;
else 
m[0][0] = y[k];
}

printf("\n\n\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
printf("m[%d][%d] = %d\t",i,j,m[i][j]);
printf("\n");
}




}
