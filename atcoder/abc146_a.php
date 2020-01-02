<?php
fscanf(STDIN, "%s", $s);

switch ($s) {
    case 'SUN':
        echo "7\n";
        break;
    case 'MON':
        echo "6\n";
        break;
    case 'TUE':
        echo "5\n";
        break;
    case 'WED':
        echo "4\n";
        break;
    case 'THU':
        echo "3\n";
        break;
    case 'FRI':
        echo "2\n";
        break;
    case 'SAT':
        echo "1\n";
        break;
}

?>