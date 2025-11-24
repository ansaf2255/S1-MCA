<form action="update.php" method="GET" >
<?php
include("server.php");
$roll=$_GET['roll'];



$a="SELECT * from studentreg where RollNo='$roll'";
$b=mysqli_query($con, $a);
if(mysqli_num_rows($b)>0)
{
     while($row=mysqli_fetch_assoc($b)){
        echo "<input type='hidden' name='roll' value='".$row['RollNo']."'>";
    echo "Roll Number: <input type='number' placeholder='".$row['RollNo']."' readonly>";
    echo "<br><br> Name: <input type='text' placeholder='".$row['Name']."' readonly>";
    echo "<br><br>Address: <input type='text' placeholder='".$row['Address']."' name='address' required>";
    echo "<br><br>Phone: <input type='number' placeholder='".$row['Phone']."' name='phone' required >";
    echo "<br><br><input type='submit' value='update' name='update'>";
    echo "<input type='reset' value='reset' name='reset'>";


    if(isset($_GET['update']))
    {
        $address=$_GET['address'];
        $phone=$_GET['phone'];
        $up="UPDATE studentreg set Address='$address',Phone='$phone' where RollNo='$roll'";
        if(mysqli_query($con, $up)){
        header("Location: delete.php");
            exit;
        } else {
            echo "error";
        }
    }
     }
    }

    echo "</form>";
    ?>


