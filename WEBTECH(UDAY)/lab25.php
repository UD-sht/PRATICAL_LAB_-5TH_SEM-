<?php 
/*25.Write a PHP script to calculate and print the factorial of a number using a for loop*/

$num = 4;  
$factorial = 1;  
for ($x=$num; $x>=1; $x--)   
{  
  $factorial = $factorial * $x;  
}  
echo "Factorial of $num is $factorial"."\n\n\n";  
?>  