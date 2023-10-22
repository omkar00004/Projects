#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Movies
{
private:
    vector<string> name{0};
    int rating;
    int watched;
    static int add_mov;
public:

    Movies(string name_val="None", int rating_val=0, int watched_val=0);

    void display_movies(){
       for(auto s : name){
        cout<<s<<" ";
       }
    }
    static int get_add_mov();

    ~Movies();
};

int Movies::add_mov{0};

Movies::Movies(string name_val,int rating_val,int watched_val) : name{name_val}, rating{rating_val}, watched{watched_val} {
        // name.push_back(name_val);
        add_mov++;
}

int Movies::get_add_mov(){
    return add_mov;
}

Movies::~Movies(){
    add_mov--;
}

void print(){
    cout<<"\nadded : "<<Movies::get_add_mov()<<endl;
}

int main(){
    Movies caprio("Django",10,1);
    caprio.display_movies();
    print();{
    Movies caprio("Mjango",10,1);
    caprio.display_movies();
    print();
    }
    print();
    
}


