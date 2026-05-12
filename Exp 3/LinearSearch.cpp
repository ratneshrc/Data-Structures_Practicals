

#include<iostream>
using namespace std;

int main(){

    int n=10;
    int key;
    bool found = false;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    
    cout << "Enter the array list " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<<"Enter number to search : "<<endl;
    cin>>key;

    for(int i=0; i<n; i++){
        
        if(arr[i] == key){
       
        cout<<"element found at index "<<i<<endl;
        found = true;
        break;
        }
    }

    if(!found){
        cout<<"element is not in th list"<<endl;
    }

    return 0 ;
}
