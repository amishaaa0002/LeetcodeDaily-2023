class Solution {

public:

    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int totalExtraGas = 0, extraGas = 0;

        int idx = 0;

        for(int i = 0; i<gas.size(); i++)

        {

           totalExtraGas += gas[i]-cost[i]; 

            extraGas += gas[i]-cost[i];

            if(extraGas<0){extraGas = 0; idx = i+1;} 

        }

        

        return totalExtraGas<0?-1:idx;

       

    }

};
        