<?php

    if(isset($_POST['name'])){

    $server  = "localhost";
    $username = "root";
    $password = "";

    $con = mysqli_connect($server,$username,$password);

    if(!$con){
        die("failed connection due to". mysqli_connect_error());
    }
    
    //echo "connection success"

    $name = $_POST['name'];
    $gender = $_POST['gender'];
    $age = $_POST['age'];
    $email = $_POST['email'];
    $phone = $_POST['phone'];
    $desc = $_POST['desc'];

    $sql = "INSERT INTO `trip`.`trip` ( `name`, `age`, `gender`, `email`, `phone`, `desc`, `dt`) VALUES ( '$name', '$age', '$gender', '$email', '$phone', '$desc', current_timestamp());";

    echo $sql;

    if($con->query($sql) == true){
        echo "successfully inserted ";
    }
    else{
        echo "ERROR : $sql <br> $con->error";
    }

    $con->close();
    }
?>



<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>welcome to travel form</title>
    <link rel="stylesheet" href="style.css">
</head>

<body>\
    <div class="container">
        <h3>welcome to trip</h3>
        <p>enter your details</p>
        <form action="index.php" method="post">
        
  <input type="text" name="name" id="name" placeholder="enter your name">
  <input type="text" name="age" id="age" placeholder="enter your age">
  <input type="text" name="gender" id="gender" placeholder="gender">
  <input type="text" name="email" id="email" placeholder="enter your email">
  <input type="text" name="phone" id="phone" placeholder="enter your phone">
  <textarea name="desc" id="desc" cols="30" rows="10" placeholder="enter any other information their "></textarea>
  <button class="btn">submit</button>
  <button class="btn">reset</button>



        </form>
    </div>
    <script src="index.js"></script>
    <!--

    INSERT INTO `trip` (`sno`, `name`, `age`, `gender`, `email`, `phone`, `other`, `dt`) VALUES ('12', 'testName', '23', 'male', 'xtz@mail.com', '1234567899', 'xgbfghsdgb', current_timestamp());
-->
</body>
</html>