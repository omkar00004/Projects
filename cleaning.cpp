/* 
    Tom's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include<iostream>
#include<string>

using namespace std;

class Cleaning{
public:
    int rooms;
    double cost{0};
    double tax{0.06};
public:
    
    void num_of_rooms(int rooms){
        this->rooms=rooms;
    }
    int cost_of_rooms(int cost){
        return this->cost=cost;
    }
    void Cost(){
        cout<<"Cost : $"<<(rooms*cost)<<endl;
    }
    double Tax(){
        return (rooms*cost*tax);
    }

    double Cost_tax(){
        return (rooms*cost*tax)+rooms*cost;
    }
};

class Small:public Cleaning{
};
  

class Large:public Cleaning{
};

    void get_info(){
    cout<<"\nTom's Carpet Cleaning Services"<<endl;
    cout<<"Charges : "<<endl;
    cout<<"     $25 per small room"<<endl;
    cout<<"     $35 per Large room"<<endl;
    cout<<"Sales Tax is 6%"<<endl;
    cout<<"Estimates are Valid for 30 Days"<<endl;
cout<<"------------------------------------------------------------"<<endl;

    }
    int set_var1(){
        int a;
        cout<<"\nEnter the Small Numbers of Rooms to be Cleaned : ";
        cin>>a;
        return a;
    }
    int set_var2(){
        int b;
        cout<<"\nEnter the Large Numbers of Rooms to be Cleaned : ";
        cin>>b;
        return b;
    }

    void obj1(Small &s){ 
    s.num_of_rooms(set_var1());
    s.cost_of_rooms(25);
    s.Cost();
    cout<<"Tax : $"<<s.Tax()<<endl;
    cout<<"Cost(with Tax) : $"<<s.Cost_tax()<<endl;
    }

    void obj2(Large &l){
    l.num_of_rooms(set_var2());
    l.cost_of_rooms(35);
    l.Cost();
    cout<<"Tax : $"<<l.Tax()<<endl;
    cout<<"Cost(with Tax) : $"<<l.Cost_tax()<<endl;
    }

    void total(Small &s,Large &l){
        // cout<<"---------------------------------------------------------------------------"<<endl;
        cout<<"==========================================================================="<<endl;
        cout<<"Total Tax : $"<<s.Small::Tax()+l.Large::Tax()<<endl;
        cout<<"Total Estimate : $"<<s.Small::Cost_tax()+l.Large::Cost_tax()<<endl; //Ambiguity
    }

int main(){
    get_info();

    Small s;
    obj1(s);

    Large l;
    obj2(l);

    total(s,l);


    // Small s;
    // s.num_of_rooms(set_var1());
    // s.cost_of_rooms(25);
    // s.Cost();
    // s.Tax();
    // cout<<"Cost(with Tax) : "<<s.Cost_tax()<<endl;

    // Large l;
    // l.num_of_rooms(set_var2());
    // l.cost_of_rooms(35);
    // l.Cost();
    // l.Tax();
    // cout<<"Cost(with Tax) : "<<l.Cost_tax()<<endl;

    // cout<<"Total Estimate : "<<s.Small::Cost_tax()+l.Large::Cost_tax()<<endl; //Ambiguity
    // cout<<s.Cost_tax()+l.Cost_tax()<<endl; 
    // cout<<""



}