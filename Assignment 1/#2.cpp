//#2 find c when  c = (a + b++) + (--a + b--)
 
 #include<stdio.h>
 int main()
 {
 	int a=8, b=10, c=5;
 	c = (a + b++) + (--a + b--);
 	printf("%d",c);
   return 0;
}

 
 