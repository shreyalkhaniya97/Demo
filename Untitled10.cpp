#include <bits/stdc++.h>
#include <vector>
// Switch DEBUG to false if you don't want to print the factors
#define DEBUG true

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        vector<long long int> v;
        long long int l,a,b,c,j,k,n,sum=0;
        cin>>n>>a>>b>>c;
        
        long long int x=n;
        vector <long long int> result;
    long long int i = 1;
    // This will loop from 1 to long long int(sqrt(x))
    while(i*i <= x) {
        // Check if i divides x without leaving a remainder
        if(x % i == 0) {
            result.push_back(i);
            // Handle the case explained in the 4th
            if(x/i != i) {
                result.push_back(x/i);
            }
        }
        i++;
    }
    // Print in case of debug mode
    if(DEBUG) {
        for(long long int i=0; i<result.size(); i++) {
         //   cout << result[i] << ' ';
        }
       // cout << endl;
    }
        
        
        
        v=result;
        l=v.size();
        sort(v.begin(), v.end());
        for(long long int i=0;i<l && v[i]<=a;i++){
            for(j=0;j<l && v[j]<=b ;j++){

                if(n%(v[i]*v[j])==0){
                            if(n/(v[i]*v[j])<=c ){
                                k=n/(v[i]*v[j]);
                                sum++;
                            }
                        }
            }
        }
        cout<<sum<<endl;
}    return 0;
}
