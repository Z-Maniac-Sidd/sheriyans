<iostream>
using namespace std;

int main(){
   int n;
   int a = 1;
   cin>>n;
   int i = 1;
   while (i<=n)
   {
      /* code */
      int j = 1;
      while (j<=i)
      {
         /* code */
         cout<<a;
         a = a+1;
         j = j+1;
      }
      cout<<endl;
      i = i+1;
   }
   
}