#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    string arr[50];
    int m = 0 ,j = 0;
    while (m != 4)
    {
        cout<<"Enter the mode you want to use: \n1. Add task\n2. View task\n3. Delete task\n4. Exit \n";
        cin>>m;
        switch(m)
        {
            case(1):
            {
                cin.ignore();
                string v;
                cout<<"Enter the task you want to add: ";
                getline(cin,v);
                arr[j] = v;
                j++;
                break;
            }

            case(2):
            {
                cout<<"Your tasks are: "<<endl;
                for(int i = 0;i<j;i++)
                {
                    cout<<arr[i]<<endl;
                }
                break;
            }
            case(3):
            {
                int index;
                cout<<"Enter the task number you want to delete: ";
                cin>>index;
                index = index - 1;
                int size = sizeof(arr)/sizeof(arr[0]);
                auto end = remove(arr,arr+size,arr[index]);
                size = end - arr;
                cout<<"Deleted the task"<<endl;
                j--;
                break;
            }

            default:{
                cout<<"Please enter valid number."<<endl;
            }
        }
    }
    
}
