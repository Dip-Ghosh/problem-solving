class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $val
     * @return Integer
     */
    function removeElement(&$nums, $val) {
       
        $count = 0;
        $l = count($nums);
        $i = 0;
        $value = $val;
        
        for($i =0; $i<$l; $i++){
            if($nums[$i] !== $value){
                $nums[$count] = $nums[$i];
                $count++;
            }
        }
        return $count;
    }
}