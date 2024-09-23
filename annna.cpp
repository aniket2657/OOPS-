#include<iostream>
using namespace std;
class student{
private:
int *arr; // data members -> array (to store marks of five subject)
int size; //size ->according to question it is 5
public:
student(int siz){
size = siz;
arr = new int[size];
}
void input(){
cout<<"enter marks"<<endl;
for(int i = 0;i<size;i++){
cin>>arr[i];
}
}
int calculate(){
int sum = 0;
for(int i = 0;i<size;i++){
sum += arr[i];
}
return sum;
}
~student(){
delete[] arr;
}
};
int main(){
int n;
cout<<"enter number of students:"<<endl;
cin>>n;
student s[n](5); //creating n object of student to input marks
int count = 0;
for(int i= 0;i<n;i++){
cout<<"enter marks for student "<<i+1<<endl; //taking input for marks 
s[i].input();
}
for(int i = 1;i<n;i++){
if(s[0].calculate() < s[i].calculate()){ //comparing marks with ana’s marks 
count++;
}
}
cout<<"no of students having more marks than anna are:"<<count<<endl;
return 0;
}