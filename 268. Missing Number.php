class Solution {

/**
 * @param Integer[] $nums
 * @return Integer
 */
function missingNumber($nums) {

    $l = count($nums);
    $sum = 0;

    for($i =0 ; $i< $l ;$i++){
        $sum += $nums[$i];
    }
    $missingNumber = $l*($l+1)/2 -$sum;

    return $missingNumber;

}
}
