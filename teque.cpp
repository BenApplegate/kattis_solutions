#include <bits/stdc++.h>
using namespace std;

void equalize(deque<int>& front, deque<int>& back){
    int total = front.size() + back.size();
    if(total % 2 == 0){
        if(front.size() > back.size()){
            while(front.size() != back.size()){
                back.push_front(front.back());
                front.pop_back();
            }
        }
        else if(front.size() < back.size()){
            while(front.size() != back.size()){
                front.push_back(back.front());
                back.pop_front();
            }
        }
    }
    else{
        if(front.size() > back.size() + 1){
            while(front.size() != back.size()+1){
                back.push_front(front.back());
                front.pop_back();
            }
        }
        else if(front.size() < back.size()+1){
            while(front.size() != back.size() + 1){
                front.push_back(back.front());
                back.pop_front();
            }
        }
    }
}

int main(){
    int n; cin >> n;
    deque<int> front;
    deque<int> back;
    for(int i = 0; i < n; i++){
        char command[12];
        int num;
        scanf("%s %d", command, &num);
        if(command[0] == 'g'){
            if(num < front.size()){
                printf("%d\n", front.at(num));
            }
            else{
                printf("%d\n", back.at(num-front.size()));
            }
        }
        else if(command[5] == 'b'){
            back.push_back(num);
        }
        else if(command[5] == 'f'){
            front.push_front(num);
        }
        else if(command[5] == 'm'){
            front.push_back(num);
        }
        equalize(front, back);
    }
}