#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    //creation
    unordered_map<string, int> mapping;

    //incertion
    //always pair is inserted in map, 3 ways
    pair<string, int> p = make_pair("avar", 32);
    pair<string, int> q("dinesh", 100);

    pair<string, int> r;
    r.first = "arup";
    r.second = 98;

    //incertion
    mapping.insert(p);
    mapping.insert(q);
    mapping.insert(r);
    //incertion, inserting key and value
    mapping["ruha"] = 234;

    cout<<"Size of map: "<<mapping.size()<<endl;

    cout<<mapping.at("avar")<<endl;
    cout<<mapping["avar"]<<endl;

    //searching in map
    cout<<mapping.count("arup")<<endl;

    //map me agar last tak pauch gaya to not found otherwise found
    if(mapping.find("arup") != mapping.end()){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    cout<<"Size of map: "<<mapping.size()<<endl;
    //here size will alse increase
    cout<<mapping["Kumar"]<<endl;
    cout<<"Size of map: "<<mapping.size()<<endl;
}