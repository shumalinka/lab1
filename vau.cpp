#include <iostream>
#include <vector>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector <int> a;
   for (int i=0; i<n; i++){ 
       int el;
       cin>>el;
       a.push_back(el);
       }
   bool t=true;  
   for (int i=0; i<n-1; i++){
      if (a[i]>a[i+1]){  
         t=false;        
      }
   }
   if (t==false){  
   for (int i=0; i<n; i++)
   {
      for (int j=0; j<n-i-1; j++)
      {
         if (a[j]>a[j+1]) 
         {
         swap(a[j],a[j+1]);
         }
      }
   }
   }
   for (int i=0; i<n; i++){ 
       cout<<a[i]<<" ";
       }
   cout<<"\n";
   system("pause");
      return 0;
}
