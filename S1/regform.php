<?php
$name=$_POST["abc"];
$roll=$_POST["roll"];
$email=$_POST["mail"];
$gen=$_POST["gen"];
$mark1=$_POST["mark1"];
$mark2=$_POST["mark2"];

$seq="SELECT * from stud where rollno='$roll'";
$result=mysqli_query($con,$seq);
if(mysqli_num_rows($result)>0)
    {echo "<script>alert('Roll no already exists');
    document.location='sqldem.php'</script>";}
else
$sq="INSERT INTO stud values($roll,'$name','$email','$gen',$mark1,$mark2,$mark1+$mark2)";
$sq1=mysqli_query($con,$sq);
if($sq1){
    echo "<script>alert('Inserted');
document.location='sqldem.php'</script> \n";}
else
    echo "Error \n";


?>