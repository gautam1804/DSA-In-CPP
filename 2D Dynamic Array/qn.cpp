#include<iostream>
using namespace std;

int main()
{
    // string n;
    // cout<<"Enter a 4 digit number.";
    // cin>>n;

     int n[4]={2,4,5,1};
    int maxi=0;
    int start=0;
    
    // for(int i=0;i<3;)
    // {   
    //     if(start<=i)
    //     {
    //     start=i+1;
    //     }
    //     if(start<3&&i<3)
    //     {
    //     maxi=max(maxi,(n[i]+n[i+start]));
    //     start++;
    //     }
       
    //     if(start>=3)
    //     {   
    //         start=0;
    //         i++;
            
    //     }
    // }

    for(int i=0,j=i+1;i<4,j<4;)
    {   
        int t1=(int)n[i];
        int t2=(int)n[j];
        cout<<n[i]<<" "<<n[j]<<"  "<< t1+t2<<endl;
        maxi=max(maxi,(t1+t2));
        cout<<maxi<<endl;

        j++;
        if(j>3)
        {
            i++;
            j=i+1;
        }
    }
 

    cout<<maxi<<endl;
    return 0;

}