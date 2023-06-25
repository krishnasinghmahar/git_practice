#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set <int>s;//declration of unordered set s
    s.insert(2);//insert() for inserting element in unordered set
    s.insert(9);
    s.insert(56);
    s.insert(24);
    //s.begin() gives the address of first element in unorderd set
    //s.end() where the unordered set ends
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }
    cout<<"SIZE OF SET IS / no. of elements in set : "<<s.size()<<endl;

    //clear() is used to clear the memory
    // s.clear();
    // cout<<"Size of set after Clear/no. of Elements after clear "<<s.size()<<endl;

    //FIND FUNCTION -> Find function starts Searching for the element if it is found then it returns the adrs or it search till it reach at the end of set.
    auto it=s.find(56);
    cout<<*it<<endl;
        //or
    int num;
    cout<<"Enter the element to be searched"<<endl;
    cin>>num;
    if(s.find(num)==s.end())
    cout<<"Element Not Found"<<endl;
    else cout<<"Element Found "<<endl;


    //ERASE FUNCTION IS TO DELETE A ELEMENT FROM THE SET
    //syntax -> s.erase(Element);

    cout<<"Before Erase Size = "<<s.size()<<endl;
    s.erase(56);

    cout<<"After Erase Size = "<<s.size()<<endl;
    //NOTE -> If the element that is to Deleted is not Present then IT will nothing do NOR Give any Error.
    //NOTE -> We can also pass iterator to erase fun 

    // auto temp=s.find(19);
    // s.erase(temp);
    //     cout<<"After Erase Size = "<<s.size()<<endl;



    //COUNT FUNCTION -> Subtitute of find fun()
    // count fun returns 1 if element is present else 0 whereas find() returns the iterator of searched element.

    if(s.count(2))
    cout<<"element is found"<<endl;
    else cout<<"not found"<<endl;
    return 0;
}