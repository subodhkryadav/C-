#include<stdio.h>
#include<math.h>
float areaCircle(float radius);
float areaSquare(float side);
float areaRactangle(float side1,float side2);
int main(){
    float radius,side,side1,side2;{
printf("enter the radius ");
scanf("%f",&radius);
printf("area of rhe circle is %f",areaCircle(radius));
    }
    printf("\n");
    {
        printf("enter the side ");
scanf("%f",&radius);
printf("area of rhe square is %f",areaSquare(side));
    }
pirntf("\n");
    {
        printf("enter the side1\n");
scanf("%f",&side1);
printf("enter the side2\n");
scanf("%f",&side2);
}
printf("area of ractangle is is %f",areaRactangle(side1,side2));
return 0;
}
float areaCircle(float radius){
    float s=3.14;
     return s*radius*radius;
}
float areaSquare(float side){
    return side*side;
}
float areaRactangle(float side1,float side2){
return side1*side2;
}