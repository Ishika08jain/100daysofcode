#include <iostream>
#include <vector>
using namespace std;
int firstoccur(vector <int> v, int target){
    int s=0;
    int e = v.size()-1;
    int mid =s+ (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(v[mid] == target){
            ans = mid;
            e = mid -1;
        }
        else if(target > v[mid]){
            s = mid+1;
        }
        else if(target < v[mid]){
           e = mid -1; 
        }
        mid = s+ (e-s)/2;
    }
    return ans;
}
int main(){
    vector <int> v{1,2,3,4,4,4,5,7};
    int target = 4;
    int indexofoccur = firstoccur(v , target);
    cout<<"Ans is "<< indexofoccur<<endl;
    auto ans2 = lower_bound(v.begin(), v.end(), target);
    cout<<ans2 - v.begin();
    return 0;

    

}