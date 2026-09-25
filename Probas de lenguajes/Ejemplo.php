<?php
declare(strict_types=1); // Fuerza el tipado estricto

function suma(int $a, int $b) {
    return $a + $b;
}

$a = 2;
$b = "3"; // Esto lanzará un TypeError al pasarlo a la función
echo "Voy a sumar $a y $b\n";
echo "¿debería ser 5?\n";

echo suma($a, $b) . "\n";
?>