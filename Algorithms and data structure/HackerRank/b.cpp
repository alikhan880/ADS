#include <iostream>
#include <deque>

using namespace std;

deque<int> d1, d2, d3;
int n1, n2, n3, q, result, maximum;
int vys1 = 0, vys2 = 0, vys3 = 0;


int main(){

    freopen("input.txt", "r", stdin);

    cin>>n1>>n2>>n3;

    for(int i=0; i<n1; i++){
        cin>>q;
        vys1 = vys1 + q;
        d1.push_back(q);
    }

    for(int i=0; i<n2; i++){
        cin>>q;
        vys2 = vys2 + q;
        d2.push_back(q);
    }

    for(int i=0; i<n3; i++){
        cin>>q;
        vys3 = vys3 + q;
        d3.push_back(q);
    }

    // while(!d1.empty()){
    //     cout<<d1.front()<<" ";
    //     d1.pop_front();
    // }
    // cout<<endl;
    // while(!d2.empty()){
    //     cout<<d2.front()<<" ";
    //     d2.pop_front();
    // }
    // cout<<endl;

    // while(!d3.empty()){
    //     cout<<d3.front()<<" ";
    //     d3.pop_front();
    // }
    // cout<<endl;
    // cout<<vys1<<endl;
    // cout<<vys2<<endl;
    // cout<<vys3<<endl;
    bool check = true;
    while(check){
        if(vys1 == vys2 && vys1 == vys3){
            result = vys1;
            check = false;
            break;
        }

        maximum = max(vys1, max(vys2,vys3));
        // cout<<"maximum "<<maximum<<endl;

        if(maximum == vys1){
            // cout<<"vys1do "<<vys1<<endl;
            vys1 = vys1 - d1.front();
            // cout<<"vys1posle "<<vys1<<endl;
            
            d1.pop_front();
        }

        if(maximum == vys2){
            // cout<<"vys2do "<<vys2<<endl;
            vys2 = vys2 - d2.front();
            // cout<<"vys2posle "<<vys2<<endl;
            d2.pop_front();
        }

        if(maximum == vys3){
            // cout<<"vys3do "<<vys3<<endl;
            vys3 = vys3 - d3.front();
            // cout<<"vys3posle "<<vys3<<endl;
            d3.pop_front();
        }
    }

    cout<<result;

    return 0;
}
