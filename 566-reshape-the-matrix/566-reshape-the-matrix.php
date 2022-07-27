class Solution {

/**
 * @param Integer[][] $mat
 * @param Integer $r
 * @param Integer $c
 * @return Integer[][]
 */
function matrixReshape($mat, $r, $c) {
    

    $data = [];
  
    foreach($mat as $items){
        foreach($items as $item){
            $data[] = $item;
        }
    }
    return count($data)/$r==$c? array_chunk($data,$c): $mat;
}
}