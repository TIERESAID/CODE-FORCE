class Solution
{
public:
    vector<int> singleNumber(vector<int>& nums){
        vector<int> result{0,0};
        int Xor = nums[0];
        int set_bit_num = 0;
         for(int i=1; i<nums.size();i++)
         // xor parce x^x = 0 , cela dit il ne restera que la 
         // combinaison des deux nombres qui sont distinct 
           Xor ^= nums[i];
           
           //To get the value of the least significant bit that 
           //is on (first from the right) use T = (A & (-A)).
           set_bit_num = (Xor & (-Xor));
           // on sait que le resultat sera sous la forme de a^b;
           // a^b != 0 si et seulement si les a != b 
           // donc pour tous . 
           // donc on separe les npmbres entre deux groupes tels que :
           // groupe1 & set_bit_num == 0 et groupe2 & set_bit_num != 0
           // le  groupe2 dont le bit le plus significatif est activé ( as partir de la droite)
           // tous les membres du groupe 1 auront les bits significatid desactive et 
           // les membres du groups 2 auront les bits activé .
           // vu que l operateur xor  a ^ b =0 si a = b donc  on  aura l element unique 
           // dans le groupe 1  et l element unique dans le groupe 2 aussi .
           
           for(int i = 0 ; i<nums.size(); i++){
               if((nums[i] & set_bit_num) == 0 )
                result[0] ^= nums[i];
                else
                result[1] ^= nums[i];
           }
           sort(result.begin() , result.end());
        return result ;
    }
};