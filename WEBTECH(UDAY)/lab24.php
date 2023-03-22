<?php
#24.Write a PHP script to convert lowercase string to uppercase

$str = "uday shrestha";
print ("Original String :\n");
$chars = str_split($str);
print($str. "\n");
print("Uppercase String :\n");

foreach ($chars as $ch){

  if(ctype_lower($ch))
  {
    echo chr(ord($ch)-32);
  }
   else
    {
    echo($ch);
    }
}
print("\n");
?>

<?php
      $servername="localhost";
      $username="root";
      $password="";
      $database="SL";    
      $conn=mysqli_connect($servername,$username,$password,$database);
   
      if(!$conn){
       echo "Connection isnt established" . mysqli_error($conn);
      }
      else{
       echo "Database conection success";
      }

     $sql=("SELECT * FROM students  ");    
    
    $result=mysqli_query($conn,$sql);
    if(mysqli_num_rows($result)>0){
        while($row=mysqli_fetch_assoc($result)){
             echo "<p>". $row['firstname'] ." ".   $row['lastname']  . " has roll : " . $row['roll'] ." Gender: ". $row['gender'] . " address: " . $row['addresss'] .  " Contact no: " . $row['contact_no']  ."</p>";

        }
    }
    if(mysqli_query($conn,$sql)){
              echo "Showing success";
             }
             else{
              echo "Showing data unsuccess" . mysqli_error($conn);
             }
      mysqli_close($conn);
?>