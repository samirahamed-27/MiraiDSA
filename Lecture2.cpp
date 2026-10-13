#include<iostream>
using namespace std;

int main(){    //hollow Diamond
        int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        int spaces = n-i;
        for(int space=1; space<=spaces; space++){
            cout<<"  ";
        }
        for(int stars = 1; stars <= 2*i-1; stars++){
            if(stars == 1 || stars == 2*i-1 )
            cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    for(int i=n-1; i>=1; i--){
        int spaces = n-i;
        for(int space=1; space<=spaces; space++){
            cout<<"  ";
        }
        for(int stars = 1; stars <= 2*i-1; stars++){
            if(stars == 1 || stars == 2*i-1 )
            cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}

int main(){    //reverse Z pattern
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
            for(int star = 1; star<=n; star++){
                if( i == 1 || i == n  || i == star)
                cout<<"*";
                else cout<<" ";
            }
        cout<<endl;
    }
    return 0;
}

int main(){      //Butterfly patterns
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int star = 1; star<=i; star++){
            cout<<"* ";
        }
        for(int space = 1; space <= 2*(n-i); space++){
            cout<<"  ";
        }
        for(int j = 1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i = n-1; i>=1; i--){
        for(int star = 1; star<=i; star++){
            cout<<"* ";
        }
        for(int space = 1; space <= 2*(n-i); space++){
            cout<<"  ";
        }
        for(int j = 1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}        

int main(){       //Printing # and . boxes of alternative pattern and of size 2x2
    int n;
    cin>>n;
    int count = 0;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<= n; j++){
                if(i==j || (i+j)%2==0) cout<<"## ";
                else cout<<".. ";
        }                                             
        cout<<endl;
    }
}
