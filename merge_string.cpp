class Solution {
public:
    int compress(vector<char>& chars) {
        int i=1;
        int count=1;
        int temp=1;
        vector<char> ans;
        while(i<chars.size()){

            if(chars[i]!=chars[i-1]){
                ans.push_back(chars[i]);
                if (temp!=1){
                    count+=2;
                    while(temp>=10){
                        count++;
                        temp=temp/10;
                    }

                }

                else{
                    count+=1;
                }
                
                temp=1;
            }

            else{
                temp++;
            }

            i++;

        }
       return count; 
    }
};
