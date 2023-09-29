#include<iostream>
#include<math.h>
using namespace std;
void cal(float a, float b, float c);
main()
{
    float _a, _b, _c;
cout<<"Enter a: ";
cin>>_a;
cout<<"Enter b: ";
cin>>_b;
cout<<"Enter c: ";
cin>>_c;
cal(_a, _b, _c);
    
    
} 
void cal(float a, float b, float c){
    float ans1 , ans2;
    ans1 = (-b + sqrt(b*b - 4*a*c))/2*a;
    ans2 = (-b - sqrt(b*b - 4*a*c))/2*a;
    cout<<"x = "<<ans1<<endl;
    cout<<"x = "<<ans2;

}
