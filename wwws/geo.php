<script type="text/javascript">
    navigator.geolocation.getCurrentPosition(showPosition);
    function showPosition(position)
    {
      var lat = position.coords.latitude;
      var lon = position.coords.longitude;
      var xmlhttp = new XMLHttpRequest();
      var url = "post2.php?lon="+lat+"&lat="+lon;
      xmlhttp.onreadystatechange = function() {
          if (this.readyState == 4 && this.status == 200) {
              var myArr = JSON.parse(this.responseText);
              myFunction(myArr);
            }
          };
          xmlhttp.open("GET", url, true);
          xmlhttp.send();

      }
</script>
