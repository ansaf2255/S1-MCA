
    <form action="studentreg.php" method="POST">
        Roll no<input type="number" name="rollno"><br><br>
        Name<input type="text" name="name"><br><br>
        Address<input type="text" name="address"><br><br>
        Phone<input type="number" name="phone"><br><br>
        Username<input type="text" name="uname"><br><br>
        Password<input type="password" name="pass"><br><br>
        Re-type Password<input type="password" name="repass"><br><br>
        <input type="submit" value="register" name="register">
</form>
<?php
include("server.php");
if(isset($_POST['register'])){
   
    $roll=$_POST['rollno'];
    $name=$_POST['name'];
    $add=$_POST['address'];
    $phone=$_POST['phone'];
    $uname=$_POST['uname'];
    $pass=$_POST['pass'];
    $repass=$_POST['repass'];
    $qr="SELECT * from studentreg where RollNo='$roll'";
    $result=mysqli_query($con,$qr);
    if (mysqli_num_rows($result)>0){
        echo "roll no already exist";
    }
    elseif($pass!=$repass){
        echo "Password does not match";
    }
    else{
        $qr2="INSERT into studentreg values($roll,'$name','$add',$phone,'$uname','$pass')";
        mysqli_query($con,$qr2);
        echo "Student registered";
    }
}
