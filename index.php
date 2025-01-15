<!DOCTYPE html>
<html lang="en">
<head>
   <meta charset="UTF-8">
   <meta name="viewport" content="width=device-width, initial-scale=1.0">
   <title>Document</title>
</head>
<body>
   <?php
   $conn=mysqli_connect("localhost","root","","abi");
   if($conn)
   {
      echo "sucess<br>";
      $query="create table student(id int primary key,name varchar(50))";
      if(mysqli_query($conn,$query))
      {
         echo "query run";
      }
   }else{
      echo "sorry";
   }
   ?>
</body>
</html>