#include<iostream>
#include<math.h>

using namespace std;

void text();
float triangleAreaHeron(float a, float b, float c);
void triangleAreaDisplay(float l1, float l2, float l3);
void calculateTriangleArea();

int main(){

    text();

    calculateTriangleArea();    

    system("pause");
    return 0;
}

void text(){
    cout<<"Hello!"<<endl;
}

float triangleAreaHeron(float a, float b, float c){
     
      float p;
      float s;
      
      //Semiperimetru
      p = (a+b+c) / 2;

      //Heron area
      s = sqrt(p*(p-a)*(p-b)*(p-c));


   return s;

}

void triangleAreaDisplay(float l1, float l2, float l3){
    cout<<"Area of the triangle for the sides read: "<<flush;
    cout<<triangleAreaHeron(l1,l2,l3)<<endl; 
}

void calculateTriangleArea(){
   
   cout<<"Enter the sides of the triangle: "<<endl;

   float a,b,c;
  
    cout<<"a: "<<flush;
    cin>>a;

    cout<<"b: "<<flush;
    cin>>b;

    cout<<"c: "<<flush;
    cin>>c;

    triangleAreaDisplay(a,b,c);
}