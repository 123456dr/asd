/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int S,E,B,K,math,n,A;
    cin>>S>>E>>B>>K;
        for(int i=S;i<=E;i++){
            math=i;
            if(math%B==0){
                n++;
                A=i;
            }
            else{
                while(math>0){
                    if(math%10==B){
                        n++;
                        A=i;
                        math=0;
                    }
                    else{
                        math=math/10;
                    }
                }
            }
            if(n==K){
                cout<<A;
                i=E+1;}
        }
    if(n<K){
        cout<<"-1";
    }
  //first

    return 0;
}



