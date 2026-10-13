#include<iostream>
using namespace std;

// int main(){     
//     int n;
//     cin>>n;
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=n; j++){
//             if(j == n || i == n-(n/2)) cout<<"* ";
//             else cout<<"  ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){            //print nth prime number    
//     int n;
//     cin>>n;
//     int primecounter=0;
//     int nthprime=0;
//     for(int num=2;primecounter<n;num++){
//         bool prime=true;
//         for(int i=2;i<num;i++){
//             if(num%i==0){
//             prime=false;
//             // cout<<"NOT A PRIME";
//             break;
//             }
//         }
//         if(prime==true){
//             primecounter++;
//             nthprime=num;
//         // cout<<"PRIME NUMBER";
//         }
//     }
//     cout<<nthprime;
//     return 0;
// }

int main(){          //cross pattern
    int n;
    cin>>n;
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <=n; j++){
            if(i == j || j+i == n+1) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

