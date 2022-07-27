class Solution {

    /**
     * @param Integer[][] $matrix
     * @return Integer[][]
     */
    function transpose($matrix) {
        $data = [];
        foreach($matrix as $key=>$value){
            foreach($value as $keyT=>$val){
             
                $data[$keyT][$key] = $matrix[$key][$keyT];
            }
        }
        return $data;
    }
}