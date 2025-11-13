<?php 
    include("server.php");
    echo "<form action='login.php' method='post'>";
    echo "Username<input type='text' name='uname'><br><br>";
    echo "Password<input type='password' name='pass' ><br><br>";
    echo "<input type='submit' name='Login' value='login'>";
    echo "<input type='reset'>";
    if(isset($_POST['Login'])){
     $uname=$_POST['uname'];
     $pass=$_POST['pass'];
     $qr="SELECT * from login where username='$uname' and password='$pass'";
     $result=mysqli_query($con,$qr);
     if(mysqli_num_rows($result)>0){
         echo "<script>window.location.href='admin.php';</script> \n";}
     else{
        echo "<script>alert('invalid credentials');</script>";
     }}
    echo "</form>";
   
 ?>       