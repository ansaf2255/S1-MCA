
    <?php
    echo "<form action='roll_drop.php' method='post'>";
    echo "<select name='ab'>";
    include("server.php");
     $sq="SELECT rollno from stud";
     $res=mysqli_query($con,$sq);
     if(mysqli_num_rows($res)>0)
    {
        while($row=mysqli_fetch_assoc($res))
        {
            echo "<option value=".$row['rollno'].">".$row['rollno']."</option>";
        }
     }
        echo "</select>";


echo "<input type='submit' value='Search'><br><br>";
// // echo "Name"."<input tyname='name'><br><br>";
// echo "Mark1"."<input type='text' name='m1'><br><br>";
// echo "Mark2"."<input type='text' name='m2'><br><br>";
if(isset($_POST)){
$roll=$_POST['ab'];
$qr="SELECT * from stud where rollno='$roll'"; 
$result=mysqli_query($con,$qr);}
if(mysqli_num_rows($result)>0)
{
    while($row1=mysqli_fetch_assoc($result))
    {
        echo "Name : ".$row1['name']."<br><br>";
        echo "Mark1 : "."<input type='text' name='m1' value=".$row1['mark1']."><br><br>";
        echo "Mark2 : "."<input type='text' name='m2' value=".$row1['mark2']."><br><br>";
        echo "<input type='hidden' name='rol' value=".$row1['rollno']."><br><br>";
        echo "<input type='submit' name='update' value='Update'><br><br>";
    }
}
if(isset($_POST['update'])){
$roll1=$_POST['rol'];
$mark1=$_POST['m1'];
$mark2=$_POST['m2'];
$qr1="UPDATE stud SET Mark1='$mark1' where rollno='$roll1'";
$qr2="UPDATE stud SET Mark2='$mark2' where rollno='$roll1'";
$result1=mysqli_query($con,$qr1);
$result2=mysqli_query($con,$qr2);}
//echo "<input type='submit' value='Update'><br><br>";
echo "<input type='reset'>";
echo "</form>";




?>



