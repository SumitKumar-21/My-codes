/*8.Write a program to assign passengers seats in a movie theater. Assume the theater with seat numbering as
 follows: 
1   A B C D
2   A B C D 
3   A B C D
4   A B C D 
5   A B C D 
The seat number D is only booked for VIP people. The program should display the seat pattern, with an X marking
 the seats already assigned. After displaying the seat availability, the program prompts for the seats desired
  with the type of the seats (VIP or Economy class). This continues until all the seats are filled or until the
   user signals that the program should end. If the particular user type is already assigned, the program should
    say that seat is occupied and ask for another choice.  */

    #include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
    cout<<"The seat avaliables are:"<<endl;
    char arr[5][4]={{'A','B','C','D'},{'A','B','C','D'},{'A','B','C','D'},{'A','B','C','D'},{'A','B','C','D'}};
     for(int i=0; i<5;i++){
        for(int j =0 ; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      }
      char seat;
      int row , col;
      string stop;
      do{
        cout<<"For economy seats type 'E'or'e' and for VIP type 'V'or'v' (X implies seat is occupied)"<<endl;
  cin>>seat;
        if (seat =='e'|| seat=='E'){
            cout<<"Enter the row"<<endl;
            cin>>row;
             cout<<"Enter the column (column<=3)"<<endl;
            cin>>col;
            if(arr[row-1][col-1]!= 'X'){
                cout<<"You have succesfully booked your seat"<<endl;
                cout<<" Thank You "<<endl;
                arr[row-1][col-1]= 'X';
            }
            else{
                cout<<"Sorry the seat is already occupied"<<endl;
            }
        }
        else{
            cout<<"Enter the row"<<endl;
            cin>>row;
             if(arr[row-1][3]!= 'X'){
                cout<<"You have succesfully booked your seat"<<endl;
                cout<<" Thank You "<<endl;
                arr[row-1][3]= 'X';
            }
            else{
                cout<<"Sorry the seat is already occupied"<<endl;
            }
        }
        cout<<"Do you want to book another seat ( yes/no)"<<endl;
        cin>>stop;

      } while(stop = 'No' || stop = 'no');
cout<<"The seat avaliables are:"<<endl;
for(int i=0; i<5;i++){
        for(int j =0 ; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      }

    }

