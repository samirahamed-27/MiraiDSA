#include<iostream>
#include<string>
using namespace std;

// int main(){    //hollow Diamond
//         int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         int spaces = n-i;
//         for(int space=1; space<=spaces; space++){
//             cout<<"  ";
//         }
//         for(int stars = 1; stars <= 2*i-1; stars++){
//             if(stars == 1 || stars == 2*i-1 )
//             cout<<"* ";
//             else cout<<"  ";
//         }
//         cout<<endl;
//     }
//     for(int i=n-1; i>=1; i--){
//         int spaces = n-i;
//         for(int space=1; space<=spaces; space++){
//             cout<<"  ";
//         }
//         for(int stars = 1; stars <= 2*i-1; stars++){
//             if(stars == 1 || stars == 2*i-1 )
//             cout<<"* ";
//             else cout<<"  ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){    //reverse Z pattern
//     int n;
//     cin>>n;
//     for(int i = 1; i<=n; i++){
//             for(int star = 1; star<=n; star++){
//                 if( i == 1 || i == n  || i == star)
//                 cout<<"*";
//                 else cout<<" ";
//             }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){      //Butterfly patterns
//     int n;
//     cin>>n;
//     for(int i = 1; i<=n; i++){
//         for(int star = 1; star<=i; star++){
//             cout<<"* ";
//         }
//         for(int space = 1; space <= 2*(n-i); space++){
//             cout<<"  ";
//         }
//         for(int j = 1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i = n-1; i>=1; i--){
//         for(int star = 1; star<=i; star++){
//             cout<<"* ";
//         }
//         for(int space = 1; space <= 2*(n-i); space++){
//             cout<<"  ";
//         }
//         for(int j = 1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }        

// int main(){       //Printing # and . boxes of alternative pattern and of size 2x2
//     int n;
//     cin>>n;
//     int count = 0;
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<= n; j++){
//                 if(i==j || (i+j)%2==0) cout<<"## ";
//                 else cout<<".. ";
//         }                                             
//         cout<<endl;
//     }
// }

// int main(){         //Electricity bill
//     int unit;
//     int bill = 50;
//     cin>>unit;
//     while(unit != 0){
//         if(unit <= 100){
//             bill = bill + unit*2;
//             unit = unit - unit;
//         }else if(unit >= 101 && unit <= 200){
//             bill = bill + (unit - 100) * 4;
//             unit = unit - (unit - 100);
//         }else if(unit >= 201 && unit <= 300){
//             bill = bill + (unit - 200) * 6;
//             unit = unit - (unit - 200);
//         }else {
//             bill = bill + (unit - 300) * 10;
//             unit = unit - (unit - 300);
//         }
//     }
//     if(bill > 1500){
//         bill = bill + bill*0.1;
//     }
//     cout<<bill;
//     return 0;
// }

// int main(){     //palendrome number
//     int n;
//     cin>>n;
//     int temp = n;
//     int reverse = 0;
//     while(temp != 0){
//         reverse = reverse*10 + temp%10;
//         temp = temp/10;
//     }
//     if(reverse == n ){
//         cout<<reverse<<endl;
//         cout<<"PALENDROME";
//     }else{
//         int abs_diff = n - reverse;
//         if( abs_diff > 0){
//             cout<<reverse<<endl;
//             cout<<abs_diff;
//         } 
//         else {
//             cout<<reverse<<endl;
//             cout<< -1*abs_diff;
//         }
//     }
//     return 0;
// }

// int main(){     //prime between l and r
//     int l,r;
//     int sum = 0;
//     cin>>l>>r;
//     bool found = false;
//     for(int i = l; i<=r; i++){
//         bool isprime = true;
//         for(int j = 2; j * j <=i; j++){
//             if(i % j ==0){
//                 isprime = false;
//                 break;
//             }
//         }
//         if(isprime == true){
//             cout<< i <<" ";
//             sum +=i;
//             found = true;
//         }
//     }
//     if(!found){
//         cout<<"NONE";
//     }
//     cout<<endl<<sum<<endl;
//     return 0;
// }

// int main(){              
//     int n,prime;
//     cin>>n;
//     int start = 2;
//     int limit = 3;
//     int count = 0;
//     while(count != n){
//         for(int i = start; i<=limit; i++ ){
//             if(limit % i == 0){
//                 prime = i;
//                 count ++;
//             }
//         }
//         limit ++;
//     }
//     cout<<prime;
//     return 0;
// }


int main(){
    int n;
    cin>>n;
    char c = 'A';
    for(int i=1; i<=n-1; i++){
        int spaces = n - i;
        for(int sp = 1; sp <= spaces; sp++){
            cout<<"  ";
        }
        for(int el = 1; el <= 2*i - 1; el++){
            if( el == 1 || el == 2*i-1){
                cout<<i<<" ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(int i = 1; i<=n; i++){
        if( i == n){
            for(int l = 1; l <= 2*i-1; l++){
                cout<<c<<" ";
                c++;
            }
        }
    }cout<<endl;
    for(int i = n - 1;i>=1; i-- ){
        int spaces = n - i;
        for(int sp = 1; sp <= spaces; sp++){
            cout<<"  ";
        }
        for(int el = 1; el <= 2*i - 1; el++){
            if( el == 1 || el == 2*i-1){
                cout<<i<<" ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
}