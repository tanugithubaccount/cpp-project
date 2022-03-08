#include<iostream>
using namespace std;




class Triangle
{
private:
float a,b,c,h;
public:


Triangle(){}


Triangle(float a,float b,float c){
this->a=a;
this->b=b;
this->c=c;
}
Triangle(float b,float h){
this->b=b;
this->h=h;
}


float area(){
cout<a,this->b,this->c);
}
float area(float a,float b,float c){
float p=(a+b+c)/2;
return sqrt(p*(p-a)*(p-b)*(p-c));
}
// overloaded functions for calculating are
float area(float b,float h){
return (b+h)/2;
}
//Overload assignment operator
Triangle& Triangle::operator= (const Triangle &triangle){
// do the copy
this->a = triangle.a;
this->b = triangle.b;
this->c = triangle.c;
return *this;
}
//equality operator.
friend bool operator== (const Triangle &t1, const Triangle &t2){
return (t1.a == t2.a && t1.b == t2.b && t1.c == t2.c);
}
};


int main(){
Triangle triangleABC(18,30,24);
cout<<"Area of the tringle ABC with sides 18,30,24: "<<triangleABC.area(18,30,24)<<"\n";


Triangle triangleBH;
cout<<"Area of the tringle with base 24 and height 18: "<<triangleBH.area(24,18)<<"\n";;


Triangle triangleCopy=triangleABC;
cout<<"Area of the copy tringle with base 24 and height 18: "<<triangleCopy.area()<<"\n";;


if(triangleABC==triangleCopy){
cout<<"The triangles are equal.\n";
}else{
cout<<"The triangles are not equal.\n";
}


system("pause");
return 0;
}


