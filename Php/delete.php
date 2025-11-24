<form action="delete.php" method="POST">
    
<table border="1">
    <tr>
        <th>Roll no</th>
        <th>Name</th>
        <th>Address</th>
        <th>Phone</th>
        <th>Update</th>
        <th>Delete</th>
</tr>
<?php

include("server.php");
$a="SELECT * from studentreg";
$b=mysqli_query($con, $a);
if(mysqli_num_rows($b)>0)
{
    while($row=mysqli_fetch_assoc($b)){
        echo "<tr>";
        echo "<td>".$row['RollNo']."</td>";
        echo "<td>".$row['Name']."</td>";
        echo "<td>".$row['Address']."</td>";
        echo "<td>".$row['Phone']."</td>";
        echo "<td> <button name='update' value='".$row['RollNo']."'>update</button></td>";
        echo "<td> <button name='delete' value='".$row['RollNo']."' >Delete</button></td>";
        echo "</tr>";
        if(isset($_POST['update'])){
            $roll=$_POST['update'];
            header("Location: update.php?roll=$roll");
            exit;

        }
        if(isset($_POST['delete'])){
        $roll=$_POST['delete'];
        $d = "DELETE FROM studentreg WHERE RollNo=$roll";
       
        if( mysqli_query($con,$d)){
        header("Location: delete.php");
            exit;
        } else {
            echo "error";
        }
        }
    }
}
echo "</table>";
echo "</form>";

?>