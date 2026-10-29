/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int i=0,j=n;
        while(i<=j){
            int mid=(i+j)/2;
            int data=guess(mid);
            if(data==0){
                return mid;
            } else if(data==1){
                i=mid+1;
            } else {
                j=mid-1;
                
            }
        }
        return 0;
    }
};