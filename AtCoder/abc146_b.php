<?php
fscanf(STDIN, "%d", $n);
fscanf(STDIN, "%s", $s);

for ($i=0; $i < strlen($s); $i++) { 
    $tmp =  ord($s[$i]) + $n;
    if($tmp > 90){
        $tmp = 65 + ($tmp - 91);
    }
    echo chr($tmp);
}
echo "\n";

?>