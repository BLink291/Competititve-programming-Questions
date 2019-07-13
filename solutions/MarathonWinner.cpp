#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n, t, temp;

    cin>>n;
    cin>>t;
    vector < vector<int> > input(n);
    vector <int > speed(n);
    vector <int > winner(t);
    vector <int > count(n);

    for (int i =0; i<n; i++){
        input[i] = vector<int> (t);
        for(int j=0; j < t; j++ ){
            cin >> temp;
            input[i][j] = temp; 
        }
        cin>>speed[i];
    }
    
    for (int i =0; i<n; i++){
        count[i]=0;
        input[i][0] = speed[i]*(input[i][0] );

    }

    for (int i =0; i<n; i++){
        for(int j=1; j < t; j++ ){

            input[i][j] = input[i][j-1] + speed[i]*(input[i][j] );

        }
    }


    for (int j =1; j<t-1; j=j+2){
         int max = input[0][j];
        for(int i=1; i < n; i++ ){

            if( max < input[i][j] )
                max = input[i][j];
        }
        winner[j] = max;
    }


    for (int j =1; j<t-1; j=j+2){
        for(int i=0; i < n; i++ ){
             if(input[i][j] >= winner[j] )
                count[i]++;
        }
    
    }
    int wonby= 0;
    for (int i =1; i<n; i++){
      
      if( count[i] > count[wonby] )
        wonby = i;
    }
    cout<<wonby+1;


    return 0;
}