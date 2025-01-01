#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &vec1){
    for (int i = 0; i < vec1.size(); i++)
    {
        cout<<vec1[i]<< " ";
    }
    cout<<endl;
}

int main(){
    int element,size;
    vector<int> vec1;
    cout<<"enter the size of vector :";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter the element in the vector: ";
        cin>>element;
        vec1.push_back(element);
    }
   // vec1.pop_back();
    vector<int> :: iterator itr = vec1.begin();
    vec1.insert(itr+1,112);
    display(vec1);
}