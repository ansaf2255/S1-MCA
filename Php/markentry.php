
<?php
include("server.php");
echo "<form action='markentry.php' method='POST'>";
echo "<div>";
        echo "Rollno: <select name='rolldrop'>";
        $sq="SELECT RollNo from studentreg";
        $res=mysqli_query($con,$sq);
        if(mysqli_num_rows($res)>0)
        {
        while($row=mysqli_fetch_assoc($res))
        {
            echo "<option value=".$row['RollNo'].">".$row['RollNo']."</option> "; 
             
        }
        }
        echo "</select>";
        echo "<input type='submit' value='search' name='search'>";
        echo "</div>";
        echo "</form>";

        if(isset($_POST['search'])){
                $roll=$_POST['rolldrop'];
                $q1= "SELECT Name,RollNo from studentreg where RollNo=$roll";
                $result=mysqli_query($con,$q1);

                echo "<div>" ;
                echo "<form action='markentry.php' method='POST'>";
                if($row=mysqli_fetch_assoc($result)){
                echo "<input type='hidden' name='roll' value='".$row['RollNo']."'>";
                echo "<br> Name :".$row['Name'];
                echo "<br><br>Mark 1<input type='number' name='m1'><br><br>";
                echo "<br><br>Mark 2<input type='number' name='m2'><br><br>";
                echo "<br><br>Mark 3<input type='number' name='m3'><br><br>";
                echo "<input type='submit' value='save' name='save'>";
                echo "<input type='reset' value='reset' name='reset'>";
                echo "</form>";
                echo "</div>";

                if(isset($_POST['save'])){
        $roll=$_POST['roll'];
        $m1=$_POST['m1'];
        $m2=$_POST['m2'];
        $m3=$_POST['m3'];
        $total=$m1+$m2+$m3;
        $mr="INSERT into mark values($roll,$m1,$m2,$m3,$total)";
        mysqli_query($con, $mr);
}

                }

        }
       

     
       
        

?>
