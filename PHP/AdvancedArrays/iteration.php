<html>
  <head>
    <title>I am the King of Arrays!</title>
  </head>
  <body>
    <p>
      <?php
      // On the line below, create your own associative array:
        $myArray = array('good' => 'chevy',
                        'great' => 'cadillac',
                        'greatest' => 'corvette');

      // On the line below, output one of the values to the page:
        echo $myArray['good'] . '<br><br>';
          
      // On the line below, loop through the array and output
      // *all* of the values to the page:
        echo "Grades and makes:" . '<br>';
        foreach ($myArray as $grade => $make) {
            echo $grade . ', ' . $make . '<br>';   
        }
     
      ?>
    </p>
  </body>
</html>
