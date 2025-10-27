<!-- <table border=1> -->
<html >   
    <body bgcolor="#ADD8E6">
<table border=2 align="center" bgcolor="#AA8D6F" size=20>
    <?php
    echo "<tr>"."<th width=150 height=50>";
    echo "NAME:"."</th>";
    echo "<td width=150 height=50>";
    echo $_POST["name"];
    echo "</td>"."</tr>";
    echo  "<tr>"."<th height=50>"."AGE:"."</th>";
    echo "<td >";
    echo $_POST["age"];
    echo "</td>"."</tr>";
    echo "<tr>"."<th height=50>"." ROLL NO:"."</th>"."<td>";
    echo $_POST["roll"];
    echo "</td>"."</tr>";
    echo "<tr>"."<th height=50>"."MARK 1:"."</th>"."<td>";
    echo $_POST["A1"];
    echo "</td>"."</tr>"; 
    echo "<tr>"."<th height=50>"."MARK 2:"."</th>"."<td>";
    echo $_POST["A2"];
    echo "</td>"."</tr>"; 
    echo "<tr>"."<th height=50>"."MARK 3:"."</th>"."<td>";
    echo $_POST["A3"];
    echo "</td>"."</tr>"; 
    echo "<tr>"."<th height=50>"."TOTAL MARK:"."</th>"."<td>";
    echo $_POST["totall"];
    echo "</td>"."</tr>";
?>
</table>
</body>
</html>
