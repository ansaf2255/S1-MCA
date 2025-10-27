<form method="POST" action="card.php">
    Name <input type="text" id="name" name="name" ><br>
    Age <input type="number" id="age"  name="age"><br>
    Roll no <input type="number" name="roll"><br>
    Gender <input type="radio" name="abc" value="M">Male
    <input type="radio" name="abc" value="F">Female <br>
    Mark 1 <input type="number" id="m1" name="A1"> <br>
    Mark 2 <input type="number" id="m2" name="A2"> <br>
    Mark 3 <input type="number" id="m3" name="A3"> <br>
    <button onclick="totalMARK()">Total</button><br>
    Total <input type="text" id="totall" name="totall"><br>
    <input type="submit">
    <input type="reset">
    <script>
    function totalMARK() {
        event.preventDefault();
        let M1=parseInt(document.getElementById("m1").value);
        let M2=parseInt(document.getElementById("m2").value);
        let M3=parseInt(document.getElementById("m3").value);
        let M4=M1+M2+M3;
        console.log(M4);
        document.getElementById("totall").value=M4;
        
    }
</script>
</form>

