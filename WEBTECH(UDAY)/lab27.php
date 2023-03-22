<?php
$servername="localhost";
$username="root";
$password="";

$conn=mysqli_connect($servername,$username,$password);
 if(!$conn)
 {
    echo "Connection isnt established".mysqli_error($conn);
 }
else
{
    echo "Database conection success";
}

$sql = "CREATE DATABASE SL";

if(mysqli_query($conn,$sql))
{
    echo "Successfully created database";
}
else
{
    echo "Not created db" . mysqli_error($conn);
}
mysqli_close($conn);
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
     $sql=(" SELECT * FROM students ORDER BY firstname ASC  ");
    if(mysqli_query($conn,$sql)){
              echo "Showing success";
             }
             else{
              echo "Showing data unsuccess" . mysqli_error($conn);
             } 
      mysqli_close($conn);
?>