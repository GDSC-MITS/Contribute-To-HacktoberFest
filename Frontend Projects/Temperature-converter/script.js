function tempConvert() 
{    
    var fahrenheit = document.getElementById("fahrenheit").value;
    var celsius = document.getElementById("celsius").value;
    var kelvin = document.getElementById("kelvin").value;

    if (fahrenheit != '' && celsius =='' && kelvin =='') 
        {
         celsius = (parseFloat(fahrenheit) - 32) / 1.8;
         kelvin = ((parseFloat(fahrenheit) - 32)/1.8) +273.15;
        } 
    else if (celsius !='' && fahrenheit =='' && kelvin=='')
    {
      fahrenheit = (parseFloat(celsius) * 1.8) + 32;
      kelvin =(parseFloat(celsius)+273.15);
    }
    else
    {
      fahrenheit=(parseFloat(kelvin-273.15)*1.8)+32;
      celsius=(parseFloat(kelvin)-273.15);	
    }

    document.getElementById('fahrenheit').value = parseFloat(fahrenheit).toFixed(1);
    document.getElementById('celsius').value = parseFloat(celsius).toFixed(1);
    document.getElementById('kelvin').value=parseFloat(kelvin).toFixed(1);
}


function ClearForm() 
{
document.getElementById('fahrenheit').value = '';
document.getElementById('kelvin').value = '';
document.getElementById('celsius').value = '';
} 
