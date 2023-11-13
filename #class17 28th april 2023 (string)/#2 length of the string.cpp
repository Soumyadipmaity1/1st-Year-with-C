// find length of the array
	
	
	#include <stdio.h>
	int main() {
	    char a[100];
	    
	    printf("Enter string to find length\n");
	    scanf("%s",&a);
        int i=0;
	    while(a[i]!='\0')
	    {
	    	i++;
		} 
	    printf("Length of the string: %d", i);
	    return 0;
}