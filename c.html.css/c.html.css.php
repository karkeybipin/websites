<!DOCTYPE html>
<html>
  <head>
    <title>Web Calculator</title>
    <link rel="stylesheet" href="style.css">
  </head>
  <body>
    <div class="calculator">
      <form>
        <input type="text" id="result" name="result" readonly>
        <br>
        <input type="button" value="1" onclick="updateResult(1)">
        <input type="button" value="2" onclick="updateResult(2)">
        <input type="button" value="3" onclick="updateResult(3)">
        <input type="button" value="+" onclick="updateResult('+')">
        <br>
        <input type="button" value="4" onclick="updateResult(4)">
        <input type="button" value="5" onclick="updateResult(5)">
        <input type="button" value="6" onclick="updateResult(6)">
        <input type="button" value="-" onclick="updateResult('-')">
        <br>
        <input type="button" value="7" onclick="updateResult(7)">
        <input type="button" value="8" onclick="updateResult(8)">
        <input type="button" value="9" onclick="updateResult(9)">
        <input type="button" value="*" onclick="updateResult('*')">
        <br>
        <input type="button" value="C" onclick="clearResult()">
        <input type="button" value="0" onclick="updateResult(0)">
        <input type="button" value="=" onclick="calculateResult()">
        <input type="button" value="/" onclick="updateResult('/')">
      </form>
    </div>
    <script src="script.js"></script>
  </body>
</html>
