 #include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
    
    // bool checkInclusion(string s1, string s2) {
    //     int winfre[26];
    //     for(int i=0 ; i<s1.length();i++){
    //         winfre[s1[i]-'a']++;
    //     }
    //       int mainfre[26];
    //     for(int i=0 ; i<s2.length();i++){
    //         mainfre[s2[i]-'a']++;
    //     }
    //     int startingpoint= 0;
    //     int endpoint=s1.length()-1;
    //     int check=0;
    //     while(endpoint<s2.length()){
    //         for(int k = startingpoint; k<=endpoint;k++){
    //      if(mainfre[s2[k]-'a']==winfre[s2[k]-'a']){
    //         check++;
    //      }
    //         }
    //         if(check==s1.length()){
    //             return true;
    //         }
    //         check=0;
    //         startingpoint++;
    //         endpoint++;
    //     }
    //     return false;
    // }





bool isFreqsame(int fre1[], int fre2[]){
    for(int i =0 ; i<2; i++){
        if(fre1[i]!=fre2[i]){
            return false;
        }
    }
    return true;
}
    int minLengthAfterRemovals(string s) {
        // if(s=="aabbab"){
        //     return 0;
        // }
        int ans=0;
        int freq[2]={1,1};
        for(int i =0 ;i<s.length();i++){
            int windfreq[2]={0,0};
            for(int k =i; (k-i<2&&k<s.length());k++){
windfreq[s[k]-'a']++;
            }
            for(int j=0; j<2;j++){
                cout<<windfreq[j]<<" ";
            }
            cout<<endl;
             for(int j=0; j<2;j++){
                cout<<freq[j]<<" ";
            }
            cout<<endl;
            if(isFreqsame(windfreq,freq)){
                s.erase(i,2);
                ans = s.length();
                cout<<s<<endl;
                i=0;
            }
            cout<<"i="<<i<<endl;

        }
        cout<<s<<endl;
        return ans;
    }

    int main(){
        string s,s2;
        cin>>s;
        // cin>>s1;
    int ans= minLengthAfterRemovals(s);
cout<<ans<<endl;
    }
