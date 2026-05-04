#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main(){
     
    //hashtable create
    unordered_map<string,int>studentgrades;


    //insert key-value pairs
    studentgrades["chotu"]=85;
    studentgrades["balak"]=92;
    studentgrades["bavlu"]=78;

    //search 
    string student="balak";

    if(studentgrades.find(student)!=studentgrades.end()){
          cout<<student<<"student Grade: "<<studentgrades[student]<<endl;

    }

    else{
cout<<student<<"Not found "<<endl;
    }

    //itarate throught the has table
    for(const auto & pair:studentgrades){
        cout<<pair.first<<":"<<pair.second<<endl;
    }

    return 0;


}

