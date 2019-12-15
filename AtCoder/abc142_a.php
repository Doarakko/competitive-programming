<?php
fscanf(STDIN, "%d", $n);

if ($n % 2 == 0) {
    echo  "0.5\n";
}else{
    echo ((int)($n / 2) + 1) / $n . "\n"; 
}

?>