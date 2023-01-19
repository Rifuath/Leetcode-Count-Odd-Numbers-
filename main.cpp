#include <iostream>

class Solution {
public:
    int countOdds(int &low, int &high) {
        


        if((high - low) <= 1){
            
            if( high - low == 1){
                return  1;

            }else {
                return  (high % 2 == 0)? 0: 1;
            }
            

           

        } else {
           
            if((high - low) % 2 == 0){
                
                if(low % 2 == 1){
                    return  ((high - low) / 2)+1;
                }else {
                    return  ((high - low) / 2);
                }
            }else {
                return  ((high - low)+1) / 2;
            }
        }

        
    }
};

int main(){

    Solution test;

    int a = 0 , b = 0;

    scanf("%d %d", &a , &b);

    std::cout << test.countOdds(a, b) << " odd numbers"<< std::endl;

    return 0;
}