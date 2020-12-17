<?php
fscanf(STDIN, "%d", $n);
fscanf(STDIN, "%s %s", $s, $t);

for ($i=0; $i < $n; $i++) { 
    echo $s[$i] . $t[$i];
}
echo "\n";
?>