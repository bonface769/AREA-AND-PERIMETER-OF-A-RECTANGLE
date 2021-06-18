// a program to find area and aperimeter of a rectangle
 #include<stdio.h>
 int main ()
 {
 	int l,w,area,perimeter;//variable declaration 
 	printf("Enter the length and width\n");//output to the user 
 	scanf("%d%d",&l,&w);
 	
 	area=(l*w);//formula find area
    perimeter=(2*(l+w));//formula to find perimeter
    
     printf("Area is:%d\nPerimeter is:%d",area ,perimeter); //output
     
     
     return 0;
 	 
 }