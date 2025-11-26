#include<iostream>
#include<cstdlib>
#include<ctime>
#include<limits>
using namespace std;
int main()
{
    int u = 0,r = 1;
    char ch='y';
    string v;
    srand(time(NULL));
    while(ch != 'n' && ch!='N')
    {
        
        cout<<"Do you want easy mode or hard mdode.If easy mode then type 'e' and if hard mode type 'h' .In easy mode you get unlimited tries and in hard mode you get 7"<<endl;
        cin.ignore();
        getline(cin,v);
        if(v == "e" || v == "E")
        {
            cout<<"The number is between 0 to 100.Enter your guess: ";
            r = rand() % 101;
            u = -1;
            while(u != r)
            {
                cin>>u;
                if(u > r)
                {
                    cout<<"High ";
                }
                else if(u < r)
                {
                    cout<<"Low ";
                }
            }
            cout<<"Correct";
        } 
        else if(v == "h" &&  v == "H")
        {
            cout<<"The number is between 0 to 100.Enter your guess: ";
            r = rand() % 100;
             bool won = false;
            for(int i = 1;i<=7;i++)
            {
                cin>>u;
                if(u>r)
                {
                    cout<<"High "<<endl;
                }
                else if(u<r)
                {
                    cout<<"Low "<<endl;
                }
                else if(u == r)
                {
                    cout<<"Correct"<<endl;
                    won = true;
                    break;
                }
            }
            if (!won)
            {    
            cout << "You lost! The correct number was: " << r << endl;
            }
        }
        else
        {
            cout << "Invalid mode selected!" << endl;
        }
        cout<<endl;
        cout<<"Do you want to continue the game(y/n): ";
        cin>>ch;
    }
    
}