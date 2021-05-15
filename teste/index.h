const char webpage [] PROGMEM = R "===== ( 
<! DOCTYPE html> 
<html> 
<style type =" text / css "> 
.button { 
  background-color: # 4CAF50; / * Green * / 
  border: nenhum; 
  cor: branco; 
  preenchimento: 15px 32px; 
  text-align: center; 
  text-decoration: none; 
  display: inline-block; 
  font-size: 16px; 
} 
</style> 
<body style = "background-color: # f9e79f "> 
<center> 
<div> 
<h1> WEBSERVER ESP8266 COM BASE AJAX </h1> 
  <button class =" button "onclick =" send (1) "> LED LIGADO </button> 
  <button class =" button "onclick = "send (0)"> LED DESLIGADO </ botão> <BR> 
</div> 
<br> 
<div> <h2>
  Temp (C): <span id = "adc_val"> 0 </span> <br> <br> 
  Estado do LED: <span id = "state"> NA </span> 
</h2> 
</div> 
<script > 
função enviar (led_sts) 
{ 
  var xhttp = new XMLHttpRequest (); 
  xhttp.onreadystatechange = function () { 
    if (this.readyState == 4 && this.status == 200) { 
      document.getElementById ("state"). innerHTML = this.responseText; 
    } 
  }; 
  xhttp.open ("GET", "led_set? state =" + led_sts, true); 
  xhttp.send (); 
} 
setInterval (function () 
{ 
  getData (); 
}, 2000); 
função getData () { 
  var xhttp = new XMLHttpRequest (); 
  xhttp.onreadystatechange = function () {
    if (this.readyState == 4 && this.status == 200) { 
      document.getElementById ("adc_val"). innerHTML = 
      this.responseText; 
    } 
  }; 
  xhttp.open ("GET", "adcread", true); 
  xhttp.send (); 
} 
</script> 
</center> 
</body> 
</html> 
) ===== ";