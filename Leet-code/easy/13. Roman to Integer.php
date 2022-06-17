class Solution {

/**
 * @param String $s
 * @return Integer
 */
function romanToInt($s) {

    $romans = [
            'M' => 1000,
            'D' => 500,
            'C' => 100,
            'L' => 50,
            'X' => 10,
            'V' => 5,
            'I' => 1
    ];
    $roman = $s;
    $result = 0;
$romanLength = strlen($roman);
for ( $n = 0; $n < $romanLength; ++$n ) {
if ( $n === $romanLength - 1 ) {
    $result += $romans[$roman[$n]];
} else {
    $result += $romans[$roman[$n]] < $romans[$roman[$n+1]] ? -$romans[$roman[$n]] :+$romans[$roman[$n]];
}
}
      return $result;
}
}
