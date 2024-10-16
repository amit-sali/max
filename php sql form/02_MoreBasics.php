<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<style>
*{
    margin :0 ;
    padding: 0;
    box-sizing : border-box;
}
.container{
    max-width : 80%;
    background-color :grey  ;
    margin : auto;
    padding : 23px;
}
</style>

<body>
   <div class="container">
    <h1>your party status : </h1>
    <?php
    $age = 8;
        if($age>18){
            echo "you can go to party";
        }
        else if( $age ==7){
            echo "you are just 7";
        }
        else{
            echo "you cant go to party";
        }

        $lang = array("cpp","python","java","snake");

        $itr = 0;
        while($itr <= 4){
            echo "<br> language : $lang[$itr] ";
            $itr++;
        }


    ?>
   </div>
</body>
</html>