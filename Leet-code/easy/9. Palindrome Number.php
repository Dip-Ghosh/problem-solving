class Solution {

/**
 * @param Integer $x
 * @return Boolean
 */
function isPalindrome($x) {

    $number = floor($x);
    $remainder = 0;
    $reverse = 0;

    if($number <=0) return false;


    while(floor($number) ){

        $remainder = $number % 10;
        $reverse = $reverse * 10 + $remainder;

        $number =floor($number /10);

    }
    return $x == $reverse;
}
}
