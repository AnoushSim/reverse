#include <iostream>
int main()
{
   std::cout<<"Please enter the number of elements for your array: "<<std::endl;
   int i,tmp;
   int n;
   std::cin>>n;
   int * arr=new int[n];
   std::cout<<"Please enter the value for each element:"<<std::endl;
   for(i=0;i<n;i++)
   std::cin>>arr[i];
   for(i=0;i<=n/2;i++)
       {
         tmp=arr[i];
         arr[i]=arr[n-1-i];
         arr[n-1-i]=tmp;
       }
    std::cout<<"Your new array is: "<<std::endl;
    for(i=0;i<n;i++)
    std::cout<<arr[i]<<std::endl;
    return 0;
}

