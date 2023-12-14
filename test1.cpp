//WELCOME TO THE CURRENCY CALCULATOR:

#include<iostream>
using namespace std;

double RupeeToDollar(int n){
    return n*0.012;

}
double DollarToRupee(int n){
    return n*83.23;

}
double RupeeToEuro(int n){
    return n*0.011;

}
double EuroToRupee(int n){
    return n*91.58;

}
double DollarToEuro(int n){
    return n*0.91;

}
double EuroToDollar(int n){
    return n*1.10;

}


int main(){

int c1 = 0;
int n = 0;
while(true){

    cout<<"1. Rupee to Dollar"<<endl;
    cout<<"2. Dollar to Rupee"<<endl;
    cout<<"3. Rupee to euro"<<endl;
    cout<<"4. Euro to Rupee"<<endl;
    cout<<"5. Dollar to Euro"<<endl;
    cout<<"6. Euro to Dollar "<<endl;
    cout<<"7. Exit"<<endl;

    cout<<"Enter the choice"<<endl;
    cin>>c1;
    
    if (c1==7){
        exit(0);
    }
    cout<<"Enter the amount"<<endl;
    cin>>n;

    if (c1 == 7)
    {
        break;
    }
    else{
        switch (c1)
        {
        case 1:
            cout<<RupeeToDollar(n)<<endl;
            break;
        case 2:
            cout<<DollarToRupee(n)<<endl;
            break;
        case 3:
            cout<<RupeeToEuro(n)<<endl;
            break;
        case 4:
            cout<<EuroToRupee(n)<<endl;
            break;
        case 5:
            cout<<DollarToEuro(n)<<endl;
            break;
        case 6:
            cout<<EuroToDollar(n)<<endl;
            break;
        
        default:
            cout<<"Invalid Choice"<<endl;
            break;
            
            
        }
        string w;
            cout<<"Do you wish to use the Calculator again?"<<endl;
            cin>> w;
            if (w== "no")
            {
                exit(0);
            }
    }
    
    
}



   return 0;
}