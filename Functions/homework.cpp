#include <iostream>
using namespace std;

int main()
{
    int priceval, price,t=1, hundredNote = 0, fiftyNote = 0, twentyNote = 0, oneNote = 0;
    cout << "Enter the price : ";
    cin >> priceval;
    price = priceval;

//third approach   
    switch (1)
    {
    case 1:
        hundredNote = price / 100;
        price = price - (100 * hundredNote);
        
    case 2:
        fiftyNote = price / 50;
        price = price - (50 * fiftyNote);
        
    case 3:
        twentyNote = price / 20;
        price = price - (20 * twentyNote);
        
    case 4:
        oneNote = price / 1;
        price = price - (1 * oneNote);
        break;
    
    default:
        break;
    }

//second approach
    // while(price>0)
    // {
    //     if(price>100) t=1;
    //     if(price>50&&price<100) t=2;
    //     if(price>20&&price<50) t=3;
    //     if(price<20) t=4;

    // switch (t)
    // {
    // case 1:
    //     hundredNote = price / 100;
    //     price = price - (100 * hundredNote);
    //     break;
    // case 2:
    //     fiftyNote = price / 50;
    //     price = price - (50 * fiftyNote);
    //     break;
    // case 3:
    //     twentyNote = price / 20;
    //     price = price - (20 * twentyNote);
    //     break;
    // case 4:
    //     oneNote = price / 1;
    //     price = price - (1 * oneNote);
    //     break;
    
    // default:
    //     break;
    // }
    // }
   
//first approach

    // while (price > 0)
    // {

    //     if (price > 100)
    //     {
    //         hundredNote = price / 100;
    //         price = price - (100 * hundredNote);
    //         cout << price << endl;
    //     }
    //     if (price > 50)
    //     {
    //         fiftyNote = price / 50;
    //         price = price - (50 * fiftyNote);
    //         // cout<<price<<endl;
    //     }
    //     if (price > 20)
    //     {
    //         twentyNote = price / 20;
    //         price = price - (20 * twentyNote);
    //         // cout<<price<<endl;
    //     }
    //     if (price < 20)
    //     {
    //         oneNote = price / 1;
    //         price = price - (1 * oneNote);
    //     }
    //     // cout<<price<<endl;
    // }

    cout << "Number of notes for price :";
    cout << priceval << endl;
    cout << "Hundred Notes : ";
    cout << hundredNote << endl;
    cout << "fifty Notes : ";
    cout << fiftyNote << endl;
    cout << "twenty Notes : ";
    cout << twentyNote << endl;
    cout << "ten Notes : ";
    cout << oneNote << endl;
}