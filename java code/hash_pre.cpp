#include<iostream>
#include<unordered_map>
using namespace std;

class fruit{

};
int main(){
    unordered_map<string,int>   mymap;

    mymap["Mango"]=100;
    mymap.insert(make_pair("banana",200));
    mymap["orange"]=300;

    ///print
    for(auto node:mymap){
        cout<<node.first<<","<<node.second<<endl;
    }
    ///bucket iterate
    for(int i=0;i<mymap.bucket_count();i++){
        for(auto it=mymap.begin(i);it!=mymap.end(i);it++){
            cout<<it->first<<" "<<it->second<<endl;
        }
    }
}
