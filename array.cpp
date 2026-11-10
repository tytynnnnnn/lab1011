#include <iostream>
#include <string>
int main() {
    int n;
    int a[100];
    std::cout << "введите количество элементов массива"<<std::endl;
    std::cin >> n;
    std::cout << "введите элементы массива"<< std::endl;
    for(int i=0; i<n; i++){
        std::cin >> a[i];}
    int sum=0;
    int count=0;
    int min=a[0];
    int max=a[0];
    int minindex=0;
    int maxindex = 0;
    for (int i = 0; i<n; i++){
        if(a[i]>0){
            sum+=a[i];
        }
        if (a[i]<0){
            count++;
        }
        if (a[i]<min){
            min = a[i];
            minindex=i;
        }
        if (a[i]>max){
            max = a[i];
            maxindex=i;
        }
        std::cout<<sum<<std::endl;
        std::cout<<count<<std::endl;
        std::cout<<min<<minindex<<std::endl;
        std::cout<<max<<maxindex<<std::endl;


        for(int i =n-1; i>=0; i--){
            if (a[i]%3==0){
                std::cout <<a[i];
            }
        }
        return 0;
    }
}