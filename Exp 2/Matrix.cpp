#include<iostream>
using namespace std;

int main(){

double r1,r2,c1,c2;
int choice;
double A[10][10],B[10][10],C[10][10];

    cout<<"Enter rows & columns of first matrix : "<<endl;
    cin>>r1>>c1;

    cout<<"Enter rows & columns of second matrix : "<<endl;
    cin>>r2>>c2;

    cout<<"Enter element of first matrix : "<<endl;
    for(int i=0; i < r1; i++){
        for(int j=0; j < c1; j++){
            cin>>A[i][j];
        }
    }

    cout<<"Enter element of second matrix : "<<endl;
    for(int i=0; i < r1; i++){
        for(int j=0; j < c1; j++){
            cin>>B[i][j];
        }
    }

    do{
        cout<<"--Matrix Menu--"<<endl;
        cout<<"1. Addition of Matrix " <<endl;
        cout<<"2. Substraction of Matrix " <<endl;
        cout<<"3. Multiplication of Matrix " <<endl;
        cout<<"4. Exit " <<endl;

        cout<<"Enter your choice : ";
        cin>> choice;

        switch(choice){

            case 1:

                if (r1 == r2 && c1 == c2 ){
                    cout<<"--Matrix Additoin--"<<endl;
                    for(int i=0; i < r1 ; i++){
                        for(int j=0; j < c1 ; j++){
                            C[i][j] = A[i][j] + B[i][j];

                            cout<<C[i][j]<<" ";
                        }
                        cout<<endl;
                    }
                }else {
                    cout<<"Addition is not possible..!!"<<endl;
                }      
                break;


            case 2:

                if (r1 == r2 && c1 == c2 ){
                    cout<<"--Matrix Substraction--"<<endl;
                    for(int i=0; i < r1 ; i++){
                        for(int j=0; j < c1 ; j++){
                            C[i][j] = A[i][j] - B[i][j];

                            cout<<C[i][j]<<" ";
                        }
                        cout<<endl;
                    }
                }else {
                    cout<<"Substraction is not possible..!!"<<endl;
                }
                break;


            case 3:

                 if(c1 == r2) {
                cout << "\nMatrix Multiplication:\n";
                for(int i = 0; i < r1; i++) {
                    for(int j = 0; j < c2; j++) {
                        C[i][j] = 0;
                        for(int k = 0; k < c1; k++) {
                            C[i][j] += A[i][k] * B[k][j];
                        }
                        cout << C[i][j] << " ";
                    }
                    cout << endl;
                }
            } else {
                cout << "\nMultiplication not possible!";
            }  
            break;

            case 4:
                cout<<"Exite program"<<endl;
                break;

            default : 
                cout<<"Invalid input.!"<<endl;
                break;

    }
    }while (choice != 4);

    return 0;
}
