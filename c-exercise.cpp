/*#include <stdio.h>
main(){
	int a=0, b=0;
	
	printf("Unesite 2 broja èije velièine želite suporediti \n");
	scanf("%d%d",&a, &b);
	if(a>b){
		printf("Prvi broj je veæi");}
			else {
				if(a<b){
					printf("Drugi broj je veæi");}
	    				else {
							printf("Brojevi su jednaki");}}

	return 0;
	
}*/

/*#include <stdio.h>
main(){
	int x=0,y=0,z=0,min=0;
	
	scanf("%d%d%d",&x, &y, &z);
	min=x;
	if(y<min){
		min=y;}
	if(z<min){
		min=z;}
	printf("Najmanji je %d",min);
	return 0;
}*/

/*#include <stdio.h>
main(){
	int a=0, b=0, c=0, d=0, s=0;
	
	printf("Unesite brojeve koje želite zbrojiti \n");
	scanf("%d%d%d%d",&a, &b, &c, &d);
	s=a;
	s=s+b;
	s=s+c;
	s=s+d;
	printf("Zbroj navecenih brojeva je %d", s);
	return 0;
}*/

/*#include <stdio.h>
main(){
	int a=0, b=0, c=0, d=0, e=0, k=0;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	k=a;
	k=k*b;
	printf("Umnožak prva 2 broja je %d\n",k);
	k=k*c;
	printf("Umnožak prva 3 broja je %d\n",k);
	k=k*d;
	printf("Umnožak prva 4 broja je %d\n",k);
	k=k*e;
	printf("Umnožak prvih 5 brojeva je %d\n",k);
	return 0;
}*/

/*#include <stdio.h>
main(){
	
	int a=0, b=0, c=0;
	
	scanf("%d%d",&a,&b);
	if(a>b){
		c=a+b;}
	else{
		c=a-b;}
	printf("Rezultat je %d",c);
	return 0;
}*/

/*#include <stdio.h>
main(){
	int i;
	for(i=22;i<100; i=i+11)
	{
		if(i!=77)
			printf("\n Broj djeljiv s 11=%d",i);
		else
			printf("\nSedamdeset i sedam");}
	return 0;
}*/

/*#include <stdio.h>
main(){
	int i;
	for(i=2;i<100; i=i+2)
	printf("\nBrojevi koji su djeljivi sa 2 su %d",i);
	return 0;
}*/

/*#include <stdio.h>
main(){
	int i,s=0;
	for(i=1;i<=30;i++){
		if(i % 9 ==0)
		s=s+i
	;}
	printf("Zbroj brojeva djeljivih s 9 u rasponu od 1-30 je %d",s);
return 0;
}*/

/*#include <stdio.h>
main(){
	int i, brojac=0;
	for(i=5;i<=150; i++)
	 if(i % 13 ==0)
	 brojac++;
printf("\nBrojeva djeljivih s 13 u rasponu od 5 do 150 ima %d", brojac);
return 0;
}*/

/*#include <stdio.h>
main(){
	int a=0, b=0, c=0, d=0, e=0, f=0, brojac=0;
	scanf("%d%d%d%d%d%d",&a, &b, &c, &d, &e, &f);
		if(a==0) brojac++;
		if(b==0) brojac++;
		if(c==0) brojac++;
		if(d==0) brojac++;
		if(e==0) brojac++;
		if(f==0) brojac++;
	printf("\n brojeva koji su jednaki 0 je %d",brojac);
	return 0;
}*/
/*#include <stdio.h>
main(){
	int i, zbroj=0, brojac=0, br;
    
    for(i=1; i<=10; i++)
    {
        printf("\nUèitaj %d. broj: ", i);
        scanf("%d", &br);
        
        if(br%2 == 0)
        {   
            zbroj = zbroj + br;
            brojac++;
        }
    }
    
    printf("\nParnih brojeva je uèitano %d", brojac);
	printf("\nZbroj parnih brojeva je %d", zbroj);
   
    return 0;
}*/
/*#include <stdio.h>
main(){
	int m=0,n=0,i=0, k=0;
	printf("Unesite brojeve\n");
	scanf("%d%d",&m, &n);
	for(i=m;i<=n;i++)
	{
	 if(i % 2 !=0) k=k+i;
	}
	 printf("Zbroj neparnih bojeva u intervalu jednak je %d",k);
	 return 0;
	
}*/
/*#include <stdio.h>
main(){
	int m=0,n=0,i=0, k=1;
	printf("Unesite brojeve\n");
	scanf("%d%d",&m, &n);
	for(i=m;i<=n;i++)
	{
	 if(i % 2 !=0)  k=k*i;
	}
	 printf("Umnožak neparnih bojeva u intervalu jednak je %d",k);
	 return 0;
}*/
#include <stdio.h>
main(){
	int i=0,j=0,f=1;
	for(i=1;i<8;i++){
		f=1;
		for(j=1;j<=i;j++){
			f=f*j;}
			printf("%d\n",f);}
	return 0;
}
