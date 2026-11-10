#include <iostream>
#include <string>
using namespace std;
int main() {
    int M,N, a[50][50];
    cin>>M>>N;
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
        {
            cin>>a[i][j];
        }
    }
    
      for(int i=0; i<M; i++){
          int sum=0;
           for(int j=0; j<N; j++)
           sum+=a[i][j];
           cout<<"summa stroki"<<i+1<<":"<<sum<<endl;
      }
    for(int j=0; j<N; j++){
          int sum=0;
          for(int i=0; i<M; i++)
           sum+=a[i][j];
           cout<<"summa stolbca" <<j+1<<":"<<sum<<endl;
      }
      int maxsum = 0, maxrow=0;
      for (int j =0; j<N; j++){
        maxsum+=a[0][j];
          
      }
        
      for(int i =1; i<M; i++){
         int sum=0;
            for(int j =0; j<N; j++)
                sum+= a[i][j];

            if(sum>maxsum){
                maxsum=sum;
                maxrow=i;
            }
        }
cout<<"max stroka"<<maxrow+1<<endl;

cout<<"transponirovannaya matrica"<<endl;
for(int j =0; j<N; j++){
    for(int i=0; i<M; i++){
        cout<<a[i][j]<<" ";
    }
    cout<<"\n";
}
bool found = false;

for(int i =0; i<M; i++)
    for(int j =0; j<N; j++){
    bool min =true, max = true;
    for(int k=0; k<N; k++)
    if (a[i][j]>a[i][k]) min=false;
    
     for(int k=0; k<N; k++)
    if (a[i][j]<a[k][j]) max=false;
    
    if(min&&max){
        cout<<a[i][j]<<endl;
        found=true;
    }
    
}
if(!found) cout<<"седловая точка отсутствует";

return 0;
    }