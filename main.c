#include <iostream>
using namespace std;

int main() {
   int t;
   cin>>t;
   int ct,cd,i,j;
   int Tr,Dr,Ts,Ds;
   for (int k = 0; k < t; k++) {
      ct=cd=0;
         cin>>Tr;
         int tr[Tr];
         for ( i = 0; i <Tr ; i++) {
            cin>>tr[i];
         }
         cin>>Dr;
         int dr[Dr];
         for ( i = 0; i < Dr; i++) {
            cin>>dr[i];
         }
         cin>>Ts;
         int ts[Ts];
         for ( i = 0; i < Ts; i++) {
            cin>>ts[i];
         }
         cin>>Ds;
         int ds[Ds];
         for ( i = 0; i < Ds; i++) {
            cin>>ds[i];
         }
         for ( j = 0; j < Ts; j++) {
            for ( i = 0; i < Tr; i++) {
               if(ts[j]==tr[i]){
                  ct++;
               }
            }
            if(ct>0 && j!=Ts-1){
               ct=0;
            }
            else{
               break;
            }
         }
      if(ct==0){
            cout<<"no"<<endl;
            continue;
         }
         
         
         for ( j = 0; j < Ds; j++) {
            for ( i = 0; i < Dr; i++) {
               if(ds[j]==dr[i]){
                  cd++;
               }
            }
            if(cd>0 && j!=Ds-1){
               cd=0;
            }
            else{
               break;
            }
       }
         if(cd>0 && ct>0){
            cout<<"yes"<<endl;
            
         }
         else{
            cout<<"no"<<endl;
        
         }
         
         
         
         
      
   }
   
   
   
   
	return 0;
}
